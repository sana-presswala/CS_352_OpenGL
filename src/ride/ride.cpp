#include "ride.h"


static GLfloat colorPallete[4][6] =
    {
        {1, 0, 0, 0.5, 0, 0},  // red
        {0, 1, 0, 0, 0.5, 0},  // green
        {0, 0, 1, 0, 0, 0.5},  // blue
        {1, 1, 0, 0.5, 0.5, 0} // yellow
};

double radToDeg(double rad) {
    return rad * 180.0 / M_PI;
}

int sgn(double x) {
    return x>=0 ? 1:-1;
}

vector<double> matrix_mul(vector<vector<double>>&A, vector<double>&p)
{
    int m = A.size() , n = p.size();
    vector<double> res;


    for(int i=0; i<m; i++)
    {
        double sum = 0;

        for(int j=0; j<n; j++)
        {
            sum+=A[i][j]*p[j];
        }

        sum+=A[i][n];

        res.push_back(sum);
    }

    vector<double> ans;
    ans.push_back(res[0]); ans.push_back(res[1]); ans.push_back(res[2]);

    return ans;
}

vector<double> translate(vector<double>&v,double tx,double ty, double tz)
{
    //function to perform translation operation on a vector

    vector<vector<double>> T = {{1,0,0,tx},{0,1,0,ty},{0,0,1,tz},{0,0,0,1}};
    return matrix_mul(T, v);
}

vector<double> rotate(vector<double>&v,double theta)
{
    //function to perform rotation operation on a vector

    theta = radian(theta);
    vector<vector<double>> T = {{cos(theta),0,sin(theta),0},{0,1,0,0},{-sin(theta),0,cos(theta),0},{0,0,0,1}};
    return matrix_mul(T, v);
}

vector<double> scale(vector<double>&v,double sx,double sy, double sz)
{
    //function to perform scaling operation on a vector

    vector<vector<double>> T = {{sx,0,0,0},{0,sy,0,0},{0,0,sz,0},{0,0,0,1}};
    return matrix_mul(T, v);
}


vector<double> get_pos(double theta) {

    //function to get the position of the track segment, given the theta parameter

    double pi = 3.14159265359;
    theta = (theta * (pi / 180));

    double x = 10*cos(theta); 
    double z = 10*sin(theta);
    double y = (x*x*x + z*z - 3*x + 4*z)/100;

    return {x,y,z};
}
vector<double> get_tangent(double theta) {

    //function to get the tangent to the curve of the track, given the theta parameter

    double pi = 3.14159265359;
    theta = (theta * (pi / 180));

    double x = 10*cos(theta); 
    double z = 10*sin(theta);
    double y = (x*x*x + z*z - 3*x + 4*z)/100;

    double dx = -10*sin(theta);
    double dz =  10*cos(theta);
    double dy = (3*x*x*dx + 2*z*dz - 3*dx + 4*dz)/100;

    return {dx,dy,dz};
}

vector<double> get_angle(double theta) {

    //returns rotation operations to align dx,dy,dz with z axis
    //if we perform reverse of these rotations, then we can align an object which is along z axis with dx,dy,dz

    vector<double> tangent = get_tangent(theta);

    double pi = 3.14159265359;
    theta = (theta * (pi / 180));

    double x = 10*cos(theta); 
    double z = 10*sin(theta);
    double y = (x*x*x + z*z - 3*x + 4*z)/100;

    double dx = tangent[0], dy = tangent[1], dz = tangent[2];

    double norm = sqrt(dx*dx + dy*dy + dz*dz);

    double cos_alpha = abs(dx/norm);
    double cos_gamma = abs(dz/norm);

    double term_x = sqrt(cos_alpha*cos_alpha + cos_gamma*cos_gamma);
    double term_y = cos_gamma/term_x;

    double theta_y =   radToDeg(acos(term_y)); //rotate abt y axis
    double theta_x =   radToDeg(acos(term_x)); //rotate abt x axis

    if(term_x == 0) {
        theta_y = 0;
        theta_x = 90;
    }
    else if(dx>=0 && dz>=0) {
        theta_y = -theta_y; theta_x = sgn(dy)*theta_x; 
    }
    else if(dx>=0) {
        theta_y = -(180 - theta_y); theta_x = sgn(dy)*theta_x; 
    }
    else if(dz>=0) {
        theta_y = theta_y; theta_x = sgn(dy)*theta_x; 
    }
    else {
        theta_y = 180 - theta_y; theta_x = sgn(dy)*theta_x; 
    }

    return {theta_x, theta_y};
}


void Ride::rideGround()
{
    //function to get the ground underneath each ride

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[2]); // 2
    glPushMatrix();
    materialProperty();
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(10, -19.8, 10);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(10, -19.8, -10);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-10, -19.8, -10);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-10, -19.8, 10);
    glEnd();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}

void Ride::carousel() {

    materialProperty();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[8]);

    glPushMatrix();
    glTranslatef(0,4,0);
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric1 = gluNewQuadric();
    gluQuadricTexture(quadric1, 1);
    gluCylinder(quadric1, 1, 1, 20, 20, 20); 
    gluDeleteQuadric(quadric1);
    glPopMatrix();

    //function to draw the carousel ride
    glPushMatrix();

        glRotatef(carouselTheta,0, 1, 0);

        for(int theta = 0; theta<360; theta+=40) {    
            glPushMatrix();
            glTranslatef(27*cos(radian(theta+10)),4,27*sin(radian(theta+10)));
            glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
            GLUquadric* quadric = gluNewQuadric();
            gluQuadricTexture(quadric, 1);
	    gluCylinder(quadric, 1, 1, 20, 20, 20); 
	    gluDeleteQuadric(quadric);
            glPopMatrix();
            
            float x=27*cos(radian(theta));
            float z=27*sin(radian(theta));

            float height = sqrt(x * x + z * z);	    
	    // Calculate the rotation angle around the Y-axis
	    float angleY = atan2(z, x) * 180.0 / M_PI;
	    
	    // Draw the cylinder
	    glPushMatrix();
	    glTranslatef(0,24,0);
	    glRotatef(angleY, 0, 1, 0); // Rotate around Y-axis
	    GLUquadric* quadric3 = gluNewQuadric();
	    gluQuadricTexture(quadric3, 1);
	    gluCylinder(quadric3, 1, 1, height, 20, 20); // Draw cylinder
	    gluDeleteQuadric(quadric3);
	    glPopMatrix();
        }

    glPopMatrix();
    
    glDisable(GL_TEXTURE_2D);
    
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[12]);
    
    glPushMatrix(); 
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric = gluNewQuadric();
    gluQuadricTexture(quadric, 1);
    gluCylinder(quadric, 30, 30, 4, 20, 20); 
    gluDeleteQuadric(quadric);
    glPopMatrix();
    
    float r=30;
    glPushMatrix();
    glTranslatef(0, 4, 0); 
    glRotatef(90,1,0,0);
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < 50; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(50);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
    
    glDisable(GL_TEXTURE_2D);
    
}


void Ride::animateRide(GLboolean carouselFlag) {

    if (carouselFlag == true)
    {
        carouselTheta = ((carouselTheta - 1)%360 + 360)%360;
    }
}
