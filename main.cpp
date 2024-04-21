#include "libs.h"
#include "index.h"

double degToRad(double angle)
{
    double pi = 3.14159265359;
    return (angle * (pi / 180));
}

//flags to toggle the rides
GLboolean carouselFlag = false, day = false;

//variables to track the motion of mouse
double mouse_x = -1, mouse_y = -1;
double mouse_x_prev = -1, mouse_y_prev = -1;

static double windowHeight = 1000, windowWidth = 1000;

//intensity of the diffused light
float intensity = 0.8;

Human* human = new Human();
Ride* ride = new Ride();
Objects* objects = new Objects();

struct Camera {
    
    double eyeX, eyeY, eyeZ; //looking from
    double refX, refY, refZ; //looking at
    int currView;

    Camera() {
        eyeX = -10;
        eyeY = 20;
        eyeZ = 50;
        refX = 50;
        refY = 10;
        refZ = 50;  
    }

    void setView(int view) {

        currView = view;

        if(view == 0) {
            //world view
            eyeX = -10;
            eyeY = 20;
            eyeZ = 50;
            refX = 50;
            refY = 5;
            refZ = 50;  
        }

        else if(view == 1) {
            //human view
            eyeX = human->human_x - 15*cos(degToRad(human->angle_x));
            eyeY = 15;
            eyeZ = human->human_z + 15*sin(degToRad(human->angle_x));
            refX = human->human_x + 15*cos(degToRad(human->angle_x));
            refY = 10;
            refZ = human->human_z - 15*sin(degToRad(human->angle_x));
        }
    }
};

Camera* camera = new Camera();

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, 1, 1, 300);
    
    //set the view reference
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(camera->eyeX, camera->eyeY, camera->eyeZ, camera->refX, camera->refY, camera->refZ, 0, 1, 0);

    //enable lighting in the scene
    glEnable(GL_LIGHTING);
    //glEnable(GL_LIGHT0);
    //glEnable(GL_LIGHT5);
    //glEnable(GL_LIGHT6);
    //glEnable(GL_LIGHT7);

    //draw the sky
    glPushMatrix();
    sky(camera->eyeX + (0.05 * camera->refX), camera->eyeY + (0.05 * camera->refY), camera->eyeZ + (0.05 * camera->refZ), 250, 250, 250);
    glPopMatrix();

    glEnable(GL_DEPTH_TEST);

    //draw the four spotLights
    spotLight1();
    spotLight2();
    spotLight3();
    spotLight4();

    //generate the circular, sandy ground
    ground();
    drawPathways();

    objects->Shed();
    //draw the boundary wall
    objects->walls();
    
    //draw the boundary flags
    objects->Shed();
    objects->Trees();
    
    glPushMatrix();
    glTranslatef(7,0,70);
    objects->bench();
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(15,0,95);
    glRotatef(90.0f,0.0f,1.0f,0.0f);
    objects->bench();
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(7,0,18);
    objects->bench();
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(29,0,8);
    glRotatef(-90.0f,0.0f,1.0f,0.0f);
    objects->bench();
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(20,0,70);
    objects->statue();
    glPopMatrix();

    //draw the four lamp posts
    glPushMatrix();
    glTranslatef(45, 0, -1);
    objects->lampPost1();
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(55, 0, -1);
    objects->lampPost1();
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(45, 0, 101);
    objects->lampPost3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(55, 0, 101);
    objects->lampPost3();
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(-1, 0, 45);
    objects->lampPost2();
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(-1, 0, 55);
    objects->lampPost2();
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(101, 0, 45);
    objects->lampPost4();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(101, 0, 55);
    objects->lampPost4();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(15,0,-30);
    glScalef(1,1.2,1);
    objects->slide1();
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(12,0,30);
    glScalef(1,1.2,1);
    objects->slide2();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(80, 0, 90);
    glRotatef(180,0,1,0);
    glScalef(0.8,0.8,0.8);
    objects->slide3();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0,0,10);
    objects->cafeteria();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(human->human_x, human->human_y, human->human_z);
    glScalef(0.3,0.3,0.3);
    glRotatef(-(90-human->angle_x), 0, 1, 0); // rotate w.r.t y axis to simulate orientation of human
    human->drawHuman();
    glPopMatrix();
      

    //draw the carousel ride
    glPushMatrix();
    glTranslatef(70,0,25);
    glScalef(0.4,0.4,0.4);
    ride->carousel();
    glPopMatrix();

    double test_theta = -45;

    glDisable(GL_LIGHTING);

    glFlush();
    glutSwapBuffers();
}


void mouseMove(int x, int y)
{
    //function to change the view reference according to mouse motion

    mouse_x = (double)x;
    mouse_y = (double)y;

    if (mouse_x_prev == -1)
        mouse_x_prev = mouse_x;
    if (mouse_y_prev == -1)
        mouse_y_prev = mouse_y;


    double delta_x = mouse_x - mouse_x_prev;
    double delta_y = mouse_y - mouse_y_prev;

    camera->eyeX += (-delta_x);
    camera->eyeY += (-delta_y);

    mouse_x_prev = mouse_x;
    mouse_y_prev = mouse_y;
}

void mouseButton(int button, int state, int x, int y)
{
    //function to handle mouse button press
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_UP)
        {
            mouse_x_prev = -1;
            mouse_y_prev = -1;
        }
    }

    //function to handle mousepad scroll for zoom functionality
    if(button == 3 || button == 4) 
    {
        if (state == GLUT_UP) return;

        if(button == 3) {
            //scroll up, i.e move fingers down hence zoom out
            camera->eyeZ += 1;
        }
        else {
            //scroll down, i.e move fingers up hence zoom in
            camera->eyeZ -= 1;
        }
    }
}



void myKeyboardFunc(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
        camera->refX -= 1.0; //look left
        break;
    case 'd':
        camera->refX += 1.0; //look right
        break;
    case 'r':
        camera->setView(0); //reset view reference
        break;
    case 'c':
        camera->setView((camera->currView  + 1)%2); //toggle view references
        break;
    case '1': 
        carouselFlag = !carouselFlag; //toggle carousel ride
        break;

    //toggle the four lamp posts
    case '5':
        if (objects->switchOne == false)
        {
            objects->switchOne = true;
            glEnable(GL_LIGHT1);
            break;
        }
        else if (objects->switchOne == true)
        {
            objects->switchOne = false;
            glDisable(GL_LIGHT1);
            break;
        }
    case '6':
        if (objects->switchTwo == false)
        {
            objects->switchTwo = true;
            glEnable(GL_LIGHT2);
            break;
        }
        else if (objects->switchTwo == true)
        {
            objects->switchTwo = false;
            glDisable(GL_LIGHT2);
            break;
        }
    case '7':
        if (objects->switchThree == false)
        {
            objects->switchThree = true;
            glEnable(GL_LIGHT3);
            break;
        }
        else if (objects->switchThree == true)
        {
            objects->switchThree = false;
            glDisable(GL_LIGHT3);
            break;
        }
    case '8':
        if (objects->switchFour == false)
        {
            objects->switchFour = true;
            glEnable(GL_LIGHT4);
            break;
        }
        else if (objects->switchFour == true)
        {
            objects->switchFour = false;
            glDisable(GL_LIGHT4);
            break;
        }
    case '0':
        if (day == false)
        {
            day = true;
            lighting1(-100, 100, 100, intensity);
            lighting2(100, 100, -100, intensity);
            lighting3(-100, 100, -100, intensity);
            lighting4(100, 100, 100, intensity);
            break;
        }
        else if (day == true)
        {
            day = false;
            glDisable(GL_LIGHT0);
            glDisable(GL_LIGHT6);
            glDisable(GL_LIGHT7);
            glDisable(GL_LIGHT5);
            break;
        }
        // increase intensity
    case 'i':
        if (intensity < 1.0)
        {
            intensity += 0.1;
            lighting1(-100, 100, 100, intensity);
            lighting2(100, 100, -100, intensity);
            lighting3(-100, 100, -100, intensity);
            lighting4(100, 100, 100, intensity);
            break;
        }
        else
        {
            intensity = 1.0;
            break;
        }
        // decrease intensity
    case 'k':
        if (intensity > 0.0)
        {
            intensity -= 0.1;
            lighting1(100, 100, 100, intensity);
            lighting2(-100, 100, 100, intensity);
            lighting3(100, 100, -100, intensity);
            lighting4(-100, 100, -100, intensity);
            break;
        }
        else
        {
            intensity = 0.0;
            break;
        }
    case 27:
        exit(1);
    }

    glutPostRedisplay();
}

void specialKeyboardFunc(int key, int x, int y)
{
    human->move(key, x, y); //handle motion of the human
    
    if(camera->currView == 1){
        camera->setView(1);
    }

    glutPostRedisplay();
}

void animate()
{
    //animate all the motions 
    ride->animateRide(carouselFlag);
    glutPostRedisplay();
}

void fullScreen(int w, int h)
{
    if (h == 0)
        h = 1;
    float ratio = (GLfloat)w / (GLfloat)h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glViewport(0, 0, w, h);
    gluPerspective(60, ratio, 1, 500); //fov-y, aspect, zNear, zFar
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Carnival in OpenGL");
    glShadeModel(GL_SMOOTH);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);

    light();

    LoadTexture("sgi images/g.sgi", 2);
    LoadTexture("sgi images/g.sgi", 3);
    
    LoadTexture("sgi images/ground.sgi", 4);
    LoadTexture("sgi images/ground.sgi", 5);
    
    LoadTexture("sgi images/scorchsky.sgi", 6);
    LoadTexture("sgi images/scorchsky.sgi", 7);
    
    LoadTexture("sgi images/pink_background.sgi", 8);
    LoadTexture("sgi images/pink_background.sgi", 9);
    
    LoadTexture("sgi images/blue_gold_marble.sgi", 10);
    LoadTexture("sgi images/blue_gold_marble.sgi", 11);
     
    LoadTexture("sgi images/blue_solid.sgi", 12);
    LoadTexture("sgi images/blue_solid.sgi", 13);
    
    LoadTexture("sgi images/Purple_texture.sgi", 14);
    LoadTexture("sgi images/Purple_texture.sgi", 15);

    LoadTexture("sgi images/bush1.sgi", 16);
    LoadTexture("sgi images/bush1.sgi", 17);
    
    LoadTexture("sgi images/wood.sgi", 18);
    LoadTexture("sgi images/wood.sgi", 19);
    
    LoadTexture("sgi images/foliage.sgi", 20);
    LoadTexture("sgi images/foliage.sgi", 21);


    glutReshapeFunc(fullScreen);
    glutKeyboardFunc(myKeyboardFunc);
    glutSpecialFunc(specialKeyboardFunc);
    glEnable(GL_BLEND);
    glEnable(GL_DEPTH_TEST);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glutDisplayFunc(display);
    glutIdleFunc(animate);
    glutMotionFunc(mouseMove);
    glutMouseFunc(mouseButton);
    glutMainLoop();

    return 0;
}

