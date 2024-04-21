#include "objects.h"

void Objects::bench()
{   
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[18]);
    
 // seat part
    glPushMatrix();
    glTranslatef(0, 3, 0);
    glScalef(1.5, .4, 4.5);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();

    // left leg
    glPushMatrix();
    glTranslatef(0, 0, 0);
    glScalef(1.5, 1, .5);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();

    // right leg
    glPushMatrix();
    glTranslatef(0,0,12);
    glScalef(1.5, 1, .5);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();

    //back
    glPushMatrix();
    glTranslatef(0, 4, 0);
    glRotatef(15.0f,0.0f,0.0f,1.0f);
    glScalef(.1, 2, 4.5);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

void Objects::statue(){

    materialProperty();

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[18]);
    
//bottom block
    glPushMatrix();
    glTranslatef(0, 0, 0);
    glScalef(3, .4, 3);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(0.5, 1, 0.5);
    glScalef(2.6, .4, 2.6);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(1.5, 2, 1.5);
    glScalef(2, 3, 2);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(0.5, 9, 0.5);
    glScalef(2.6, .4, 2.6);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();
   
    //top part
    glPushMatrix();
    glTranslatef(3, 11, 3);
    glScalef(1, 1.8, 1);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.5, 18, 4.5);
    glutSolidSphere(2.0, 16, 16);
    glPopMatrix();
    
    glDisable(GL_TEXTURE_2D);
   
}

void Objects::slide3() {
    materialProperty();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[12]);
    glPushMatrix(); 
    glTranslatef(0, 0, 0); 
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric = gluNewQuadric();
    gluQuadricTexture(quadric, 1); 
    gluCylinder(quadric, 0.5, 0.5, 26, 20, 20); 
    gluDeleteQuadric(quadric);
    glPopMatrix();
    
    glPushMatrix(); 
    glTranslatef(0, 0, 5); 
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric2 = gluNewQuadric();
    gluQuadricTexture(quadric2, 1); 
    gluCylinder(quadric2, 0.5, 0.5, 26, 20, 20); 
    gluDeleteQuadric(quadric2);
    glPopMatrix();
    
    glPushMatrix(); 
    glTranslatef(5, 0, 5); 
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric3 = gluNewQuadric();
    gluQuadricTexture(quadric3, 1); 
    gluCylinder(quadric3, 0.5, 0.5, 26, 20, 20); 
    gluDeleteQuadric(quadric3);
    glPopMatrix();
    
    glPushMatrix(); 
    glTranslatef(5, 0, 0); 
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric4 = gluNewQuadric();
    gluQuadricTexture(quadric4, 1); 
    gluCylinder(quadric4, 0.5, 0.5, 26, 20, 20); 
    gluDeleteQuadric(quadric4);
    glPopMatrix();
    
    glPushMatrix(); 
    glTranslatef(0, 4, 0); 
    GLUquadric* quadric5 = gluNewQuadric();
    gluQuadricTexture(quadric5, 1); 
    gluCylinder(quadric5, 0.5, 0.5, 5, 20, 20); 
    gluDeleteQuadric(quadric5);
    glPopMatrix();
    
    glPushMatrix(); 
    glTranslatef(0, 8, 0); 
    GLUquadric* quadric6 = gluNewQuadric();
    gluQuadricTexture(quadric6, 1); 
    gluCylinder(quadric6, 0.5, 0.5, 5, 20, 20); 
    gluDeleteQuadric(quadric6);
    glPopMatrix();
    
    glPushMatrix(); 
    glTranslatef(0, 12, 0); 
    GLUquadric* quadric7 = gluNewQuadric();
    gluQuadricTexture(quadric7, 1); 
    gluCylinder(quadric7, 0.5, 0.5, 5, 20, 20); 
    gluDeleteQuadric(quadric7);
    glPopMatrix();
    
    glPushMatrix(); 
    glTranslatef(0, 16, 0); 
    GLUquadric* quadric8 = gluNewQuadric();
    gluQuadricTexture(quadric8, 1); 
    gluCylinder(quadric8, 0.5, 0.5, 5, 20, 20); 
    gluDeleteQuadric(quadric8);
    glPopMatrix();
    
    glPushMatrix(); 
    glTranslatef(0, 24, 0); 
    glRotatef(90,0,1,0);
    GLUquadric* quadric9 = gluNewQuadric();
    gluQuadricTexture(quadric9, 1); 
    gluCylinder(quadric9, 0.5, 0.5, 5, 20, 20); 
    gluDeleteQuadric(quadric9);
    glPopMatrix();
    
    glPushMatrix(); 
    glTranslatef(0, 24, 5); 
    glRotatef(90,0,1,0);
    GLUquadric* quadric10 = gluNewQuadric();
    gluQuadricTexture(quadric10, 1); 
    gluCylinder(quadric10, 0.5, 0.5, 5, 20, 20); 
    gluDeleteQuadric(quadric10);
    glPopMatrix();
    
    glPushMatrix(); 
    glTranslatef(-0.5, 20, -0.5); 
    glScalef(2,0.33,2);
    boxShape();
    glPopMatrix();
    
    glDisable(GL_TEXTURE_2D);
    
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[8]);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(5.5, 20, 5.5);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(5.5, 20, 0);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(30, 0, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(30, 0, 5.5);
    glEnd();
   
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(5.5, 20, 5.5);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(5.5, 22, 5.5);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(30, 2, 5.5);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(30, 0, 5.5);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(5.5, 20, 0);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(5.5, 22, 0);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(30, 2, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(30, 0, 0);
    glEnd();
        
    glDisable(GL_TEXTURE_2D);
}


void Objects::slide2(){
    materialProperty();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[8]);
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 0, 40); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric, 0.5, 0.5, 15, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 0, 64); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric3 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric3, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric3, 0.5, 0.5, 15, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric3);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 15, 64);
    glRotatef(180.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric6 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric6, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric6, 0.5, 0.5, 24, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric6);
    glPopMatrix();
   
    //strings for seat 1
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 5, 45);
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric1 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric1, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric1, 0.2, 0.2, 10, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric1);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 5, 49);
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric4 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric4, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric4, 0.2, 0.2, 10, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric4);
    glPopMatrix();
   
    //strings for seat 2
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 5, 55);
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric5 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric5, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric5, 0.2, 0.2, 10, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric5);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 5, 59);
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric7 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric7, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric7, 0.2, 0.2, 10, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric7);
    glPopMatrix();
   
    //seat 2
    glPushMatrix();
    glTranslatef(78.5, 5, 54);
    glScalef(1, 0.1, 1.9);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();
   
    //seat 1
    glPushMatrix();
    glTranslatef(78.5, 5, 44);
    glScalef(1, 0.1, 1.9);
    cubicalShape(0.8, 0.2, 0.4, 0, 0.6, 0.6);
    glPopMatrix();
    
    glDisable(GL_TEXTURE_2D);
}

void Objects::slide1(void)
{
    materialProperty();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[12]);
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 0, 40); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric, 0.5, 0.5, 15, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(72, 0, 40); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric1 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric1, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric1, 0.5, 0.5, 15, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric1);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(72, 0, 64); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric2 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric2, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric2, 0.5, 0.5, 15, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric2);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 0, 64); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric3 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric3, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric3, 0.5, 0.5, 15, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric3);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 15, 40);
    glRotatef(270.0f, 0.0f, 1.0f, 0.0f);
    GLUquadric* quadric4 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric4, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric4, 0.5, 0.5, 8, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric4);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(72, 15, 64);
    glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
    GLUquadric* quadric5 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric5, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric5, 0.5, 0.5, 8, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric5);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 15, 64);
    glRotatef(180.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric6 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric6, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric6, 0.5, 0.5, 24, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric6);
    glPopMatrix();
   
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(72, 15, 64);
    glRotatef(180.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric7 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric7, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric7, 0.5, 0.5, 24, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric7);
    glPopMatrix();    
   
    for(int i=42;i<=62;i+=2){
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, 15, i);
    glRotatef(270.0f, 0.0f, 1.0f, 0.0f);
    GLUquadric* quadric8 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric8, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric8, 0.5, 0.5, 8, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric8);
    glPopMatrix();
    }
   
    for(int i=13;i>=2;i-=2){
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, i, 64);
    glRotatef(270.0f, 0.0f, 1.0f, 0.0f);
    GLUquadric* quadric9 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric9, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric9, 0.5, 0.5, 8, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric9);
    glPopMatrix();   }  
   
    for(int i=13;i>=2;i-=2){
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(80, i, 40);
    glRotatef(270.0f, 0.0f, 1.0f, 0.0f);
    GLUquadric* quadric10 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric10, 1); // Enable texture coordinates for the quadric
    gluCylinder(quadric10, 0.5, 0.5, 8, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    gluDeleteQuadric(quadric10);
    glPopMatrix();   }  
    
    glDisable(GL_TEXTURE_2D);
}

void Objects::Tree(){
    materialProperty();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[18]);
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(0.0f, 0.0f, 0.0f); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric, 1); // Enable texture coordinates for the quadric
    // Draw the cylinder along the y-axis
    gluCylinder(quadric, 2.0, 1.0, 25.0, 20, 20);
    gluDeleteQuadric(quadric); // Delete the quadric object
    glPopMatrix(); 
       
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(0.0f, 15.0f, 0.0f); // Move to the position of the cylinder
    glRotatef(-45.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric2 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric2, 1); // Enable texture coordinates for the quadric    
    // Draw the cylinder along the y-axis
    gluCylinder(quadric2, 1.0, 0.5, 10.0, 20, 20); // Parameters: base radius, top radius, height, slices, stacks    
    gluDeleteQuadric(quadric2); // Delete the quadric object
    glPopMatrix();
    
    glDisable(GL_TEXTURE_2D);
    
    materialProperty();   
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[20]);
    
    /* for (int i = 0; i < 10; ++i) {
        // Randomly place spheres around the upper part of the tree to represent foliage
        float x = (float)(rand() % 20) / 2.5f - 4.0f; // Random x position [-1, 1]
        float z = (float)(rand() % 20) / 2.5f - 3.0f;

        glPushMatrix();
        glTranslatef(x, 20.0f+float(rand()%10), z); // Translate to a random position around the upper part of the tree
        glutSolidSphere(4.0f+float(rand()%2), 20, 20); // Draw a sphere for foliage
        glPopMatrix();
    } */
   
    
    GLUquadric* quad1 = gluNewQuadric();
    glPushMatrix();
    glTranslatef(-5, 25, -5);
    gluQuadricTexture(quad1, 1);
    gluSphere(quad1, 6, 20, 20);// Draw a sphere for foliage
    glPopMatrix();
    
    GLUquadric* quad2 = gluNewQuadric();
    glPushMatrix();
    glTranslatef(-5, 25, 5);
    gluQuadricTexture(quad2, 1);
    gluSphere(quad2, 3, 20, 20); // Draw a sphere for foliage
    glPopMatrix();
    
    GLUquadric* quad3 = gluNewQuadric();
    glPushMatrix();
    glTranslatef(5, 25, -5);
    gluQuadricTexture(quad3, 1);
    gluSphere(quad3, 4, 20, 20); // Draw a sphere for foliage
    glPopMatrix();
    
    GLUquadric* quad4 = gluNewQuadric();
    glPushMatrix();
    glTranslatef(5, 25, 5);
    gluQuadricTexture(quad4, 1);
    gluSphere(quad4, 7, 20, 20); // Draw a sphere for foliage
    glPopMatrix();
    
    GLUquadric* quad5 = gluNewQuadric();
    glPushMatrix();
    glTranslatef(0, 30, 0);
    gluQuadricTexture(quad5, 1);
    gluSphere(quad5, 6, 20, 20); // Draw a sphere for foliage
    glPopMatrix();
    
    
    glDisable(GL_TEXTURE_2D);
    
    

}

void Objects::Trees(){
    glPushMatrix();
    glTranslatef(63, 0, 4);
    Tree();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(3, 0, 63);
    glScalef(0.7f, 0.7f, 0.7f);
    Tree();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(98, 0, 63);
    glScalef(0.52f, 0.7f, 0.52f);
    Tree();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(97, 0, 39);
    Tree();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(39, 0, 95);
    glRotatef(-90,0,1,0);
    Tree();
    glPopMatrix();
    
}

void Objects::Shed(){
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[10]);

    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(43, 3, 43);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(43, 3, 57);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(57, 3, 57);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(57, 3, 43);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(43, 0, 43);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(43, 0, 57);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(43, 3, 57);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(43, 3, 43);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(57, 0, 43);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(57, 0, 57);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(57, 3, 57);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(57, 3, 43);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(43, 0, 43);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(57, 0, 43);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(57, 3, 43);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(43, 3, 43);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(43, 0, 57);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(57, 0, 57);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(57, 3, 57);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(43, 3, 57);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(44, 5, 56);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(44, 5, 44);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(56, 5, 44);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(56, 5, 56);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(44, 0, 44);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(44, 5, 44);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(44, 5, 56);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(44, 0, 56);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(56, 0, 44);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(56, 5, 44);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(56, 5, 56);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(56, 0, 56);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(44, 0, 44);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(44, 5, 44);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(56, 5, 44);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(56, 0, 44);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(44, 0, 56);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(44, 5, 56);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(56, 5, 56);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(56, 0, 56);
    glEnd();
    
    
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(44.0f, 3.0f, 44.0f); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric, 1); // Enable texture coordinates for the quadric
    
    // Draw the cylinder along the y-axis
    gluCylinder(quadric, 1.0, 1.0, 25.0, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    
    gluDeleteQuadric(quadric); // Delete the quadric object
    glPopMatrix();
    
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(44.0f, 3.0f, 56.0f); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric1 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric1, 1); // Enable texture coordinates for the quadric
    
    // Draw the cylinder along the y-axis
    gluCylinder(quadric1, 1.0, 1.0, 25.0, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    
    gluDeleteQuadric(quadric1); // Delete the quadric object
    glPopMatrix();
    
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(56.0f, 3.0f, 44.0f); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric2 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric2, 1); // Enable texture coordinates for the quadric
    
    // Draw the cylinder along the y-axis
    gluCylinder(quadric2, 1.0, 1.0, 25.0, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    
    gluDeleteQuadric(quadric2); // Delete the quadric object
    glPopMatrix();
    
    glPushMatrix(); // Save the current transformation matrix
    glTranslatef(56.0f, 3.0f, 56.0f); // Move to the position of the cylinder
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    GLUquadric* quadric3 = gluNewQuadric(); // Create a new quadric object
    gluQuadricTexture(quadric3, 1); // Enable texture coordinates for the quadric
    
    // Draw the cylinder along the y-axis
    gluCylinder(quadric3, 1.0, 1.0, 25.0, 20, 20); // Parameters: base radius, top radius, height, slices, stacks
    
    gluDeleteQuadric(quadric3); // Delete the quadric object
    glPopMatrix();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(43, 28, 43);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(43, 28, 57);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(57, 28, 57);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(57, 28, 43);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(43, 30, 43);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(43, 30, 57);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(57, 30, 57);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(57, 30, 43);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(43, 28, 43);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(43, 28, 57);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(43, 30, 57);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(43, 30, 43);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(57, 28, 43);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(57, 28, 57);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(57, 30, 57);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(57, 30, 43);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(43, 28, 43);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(57, 28, 43);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(57, 30, 43);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(43, 30, 43);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(43, 28, 57);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(57, 28, 57);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(57, 30, 57);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(43, 30, 57);
    glEnd();    
    
    GLUquadricObj *qobj;
    qobj = gluNewQuadric();
    gluQuadricTexture(qobj, 1);
    gluQuadricDrawStyle(qobj, GLU_FILL);    
    glPushMatrix();
    glTranslatef(50,36,50);
    glScalef(2,1.2,2);
    glRotatef(90, 1.0f, 0.0f, 0.0f);
    glRotatef(0, 0.0f, 1.0f, 0.0f);
    gluCylinder(qobj, 0, 6, 6, 10, 1);  
    glPopMatrix();  
    
    glDisable(GL_TEXTURE_2D);
    
      
    
}

void Objects::bush()
{
    //function to draw a bush

    quad = gluNewQuadric();

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[16]);
    glPushMatrix();
    gluQuadricTexture(quad, 1);
    gluSphere(quad, 1.5, 100, 100);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}

void Objects::cafeteriaFence(){

    //bushes for park
    for (float i = 1; i <= 44; i += 4)
    {        
        glPushMatrix();
        glTranslatef(i,1,33);
        glScalef(1.3, 1.5, 1);
        bush();
        glPopMatrix();
       
     }
       
     for (float i = 1; i <= 44; i += 4)
    {
        glPushMatrix();
        glTranslatef(i,1,47);
        glScalef(1.3, 1.5, 1);
        bush();
        glPopMatrix();
    }

}

void Objects::cafeteria()
{
    //function for the cafeteria fence consisting of dining tables, a pizza shop
    //a desert shop, and a donuts shop'

    cafeteriaFence();

    glPushMatrix();
    glTranslatef(58, 0, 0);
    cafeteriaFence();
    glPopMatrix();
}

void Objects::block1(){
    materialProperty();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[18]);
    
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0, 0, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0, 1, 0);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(44.4, 1, 0);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(44.4, 0, 0);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0, 0, 1);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0, 1, 1);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(44.4, 1, 1);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(44.4, 0, 1);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0, 0, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0, 0, 1);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(0, 1, 0);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(0, 1, 1);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(44.4, 0, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(44.4, 0, 1);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(44.4, 1, 0);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(44.4, 1, 1);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0, 0, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0, 0, 1);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(44.4, 0, 1);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(44.4, 0, 0);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0, 1, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0, 1, 1);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(44.4, 1, 1);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(44.4, 1, 0);
    glEnd();
    
    glDisable(GL_TEXTURE_2D);
}

void Objects::block2()
{
    //function to draw the single unit of the wall

    materialProperty();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, ID2[18]);
   
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0, 0, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.5, 0, 0);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.5, 4.5, 0);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(0, 4.5, 0);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0, 0, 1);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.5, 0, 1);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.5, 4.5, 1);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(0, 4.5, 1);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0, 0, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0, 0, 1);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(0, 4.5, 1);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(0, 4.5, 0);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.5, 0, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.5, 0, 1);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.5, 4.5, 1);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.5, 4.5, 0);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0, 4.5, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0, 4.5, 1);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.5, 4.5, 1);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.5, 4.5, 0);
    glEnd();
    
    glBegin(GL_QUADS);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(0, 0, 0);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(0, 0, 1);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.5, 0, 1);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.5, 0, 0);
    glEnd();
   
    glDisable(GL_TEXTURE_2D);
}

void Objects::walls()
{
    //function to draw the wall boundary
    glPushMatrix();
    glTranslatef(0, 1, 0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 3, 0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(55.6, 1, 0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(55.6, 3, 0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 1, 99);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 3, 99);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(55.6, 1, 99);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(55.6, 3, 99);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 1, 0);
    glRotatef(-90,0,1,0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 3, 0);
    glRotatef(-90,0,1,0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(100, 1, 0);
    glRotatef(-90,0,1,0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(100, 3, 0);
    glRotatef(-90,0,1,0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 1, 99);
    glRotatef(90,0,1,0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 3, 99);
    glRotatef(90,0,1,0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(100, 1, 99);
    glRotatef(90,0,1,0);
    block1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(100, 3, 99);
    glRotatef(90,0,1,0);
    block1();
    glPopMatrix();
    
    //first part in front
    for (float i=0; i <= 33.3; i += 11.1)
    {
        glPushMatrix();
        glTranslatef(1.1+i, 0, 1);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(4.8+i, 0, 1);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(8.5+i, 0, 1);
        block2();
        glPopMatrix();
    }
    
    for (float i=0; i <= 33.3; i += 11.1)
    {
        glPushMatrix();
        glTranslatef(1.1+i+55.6, 0, 1);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(4.8+i+55.6, 0, 1);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(8.5+i+55.6, 0, 1);
        block2();
        glPopMatrix();
    }

    for (float i=0; i <= 33.3; i += 11.1)
    {
        glPushMatrix();
        glTranslatef(1.1+i, 0, 100);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(4.8+i, 0, 100);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(8.5+i, 0, 100);
        block2();
        glPopMatrix();
    }
    
    for (float i=0; i <= 33.3; i += 11.1)
    {
        glPushMatrix();
        glTranslatef(1.1+i+55.6, 0, 100);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(4.8+i+55.6, 0, 100);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(8.5+i+55.6, 0, 100);
        block2();
        glPopMatrix();
    }
    
    for (float i=0; i <= 33.3; i += 11.1)
    {
        glPushMatrix();
        glTranslatef(1, 0, 1.1+i);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(1, 0, 4.8+i);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(1, 0, 8.5+i);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
    }
    
    for (float i=0; i <= 33.3; i += 11.1)
    {
        glPushMatrix();
        glTranslatef(99, 0, 1.1+i);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(99, 0, 4.8+i);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(99, 0, 8.5+i);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
    }
    
    for (float i=0; i <= 33.3; i += 11.1)
    {
        glPushMatrix();
        glTranslatef(0, 0, 1.1+i+55.6);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(0, 0, 4.8+i+55.6);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(0, 0, 8.5+i+55.6);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
    }
    
    for (float i=0; i <= 33.3; i += 11.1)
    {
        glPushMatrix();
        glTranslatef(100, 0, 1.1+i+55.6);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(100, 0, 4.8+i+55.6);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
        
        glPushMatrix();
        glTranslatef(100, 0, 8.5+i+55.6);
        glRotatef(-90,0,1,0);
        block2();
        glPopMatrix();
    }
}

void Objects::lampPost1() //1
{

    GLfloat no_mat[] = {0.4, 0.3, 0.2, 1.0};
    GLfloat mat_ambient[] = {0.5, 0.2, 0.6, 1.0};
    GLfloat mat_ambient_color[] = {0.2, 0.5, 0.4, 1.0};
    GLfloat mat_diffuse[] = {1.000, 0.443, 0.100, 1.0};
    GLfloat high_shininess[] = {100.0};
    GLfloat mat_emission[] = {1, 1, 1, 1.0};
    GLfloat black[] = {0, 0, 0, 1};

    glPushMatrix();
    glTranslatef(0, 29.4, 0);
    glScalef(1,1,1);
    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    if (switchOne == true)
    {
        glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
    }
    else
    {
        glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
    }
    glutSolidCube(1.0);
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(0, 29, 0);
    glRotatef(90, 1, 0, 0);
    glScalef(0.3, 0.3, 1.5);
    cylindricalShape(0.1, 0.1, 0.1, 0.05, 0.05, 0.05);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0,29,0);
    glScalef(1.5,0.4,1.5);
    glutSolidCube(1.0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0,30.2,0);
    glScalef(1.5,0.4,1.5);
    glutSolidCube(1.0);
    glPopMatrix();
}

void Objects::lampPost2() //2
{

    GLfloat no_mat[] = {0.4, 0.3, 0.2, 1.0};
    GLfloat mat_ambient[] = {0.5, 0.2, 0.6, 1.0};
    GLfloat mat_ambient_color[] = {0.2, 0.5, 0.4, 1.0};
    GLfloat mat_diffuse[] = {1.000, 0.443, 0.100, 1.0};
    GLfloat high_shininess[] = {100.0};
    GLfloat mat_emission[] = {1, 1, 1, 1.0};
    GLfloat black[] = {0, 0, 0, 1};

    glPushMatrix();
    glTranslatef(0, 29.4, 0);
    glScalef(1,1,1);
    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    if (switchTwo == true)
    {
        glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
    }
    else
    {
        glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
    }
    glutSolidCube(1.0);
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(0, 29, 0);
    glRotatef(90, 1, 0, 0);
    glScalef(0.3, 0.3, 1.5);
    cylindricalShape(0.1, 0.1, 0.1, 0.05, 0.05, 0.05);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0,29,0);
    glScalef(1.5,0.4,1.5);
    glutSolidCube(1.0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0,30.2,0);
    glScalef(1.5,0.4,1.5);
    glutSolidCube(1.0);
    glPopMatrix();
}

void Objects::lampPost3() //3
{

    GLfloat no_mat[] = {0.4, 0.3, 0.2, 1.0};
    GLfloat mat_ambient[] = {0.5, 0.2, 0.6, 1.0};
    GLfloat mat_ambient_color[] = {0.2, 0.5, 0.4, 1.0};
    GLfloat mat_diffuse[] = {1.000, 0.443, 0.100, 1.0};
    GLfloat high_shininess[] = {100.0};
    GLfloat mat_emission[] = {1, 1, 1, 1.0};
    GLfloat black[] = {0, 0, 0, 1};

    glPushMatrix();
    glTranslatef(0, 29.4, 0);
    glScalef(1,1,1);
    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    if (switchThree == true)
    {
        glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
    }
    else
    {
        glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
    }
    glutSolidCube(1.0);
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(0, 29, 0);
    glRotatef(90, 1, 0, 0);
    glScalef(0.3, 0.3, 1.5);
    cylindricalShape(0.1, 0.1, 0.1, 0.05, 0.05, 0.05);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0,29,0);
    glScalef(1.5,0.4,1.5);
    glutSolidCube(1.0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0,30.2,0);
    glScalef(1.5,0.4,1.5);
    glutSolidCube(1.0);
    glPopMatrix();
}

void Objects::lampPost4() //4
{

    GLfloat no_mat[] = {0.4, 0.3, 0.2, 1.0};
    GLfloat mat_ambient[] = {0.5, 0.2, 0.6, 1.0};
    GLfloat mat_ambient_color[] = {0.2, 0.5, 0.4, 1.0};
    GLfloat mat_diffuse[] = {1.000, 0.443, 0.100, 1.0};
    GLfloat high_shininess[] = {100.0};
    GLfloat mat_emission[] = {1, 1, 1, 1.0};
    GLfloat black[] = {0, 0, 0, 1};

    glPushMatrix();
    glTranslatef(0, 29.4, 0);
    glScalef(1,1,1);
    glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    if (switchFour == true)
    {
        glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
    }
    else
    {
        glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
    }
    glutSolidCube(1.0);
    glPopMatrix();
   
    glPushMatrix();
    glTranslatef(0, 29, 0);
    glRotatef(90, 1, 0, 0);
    glScalef(0.3, 0.3, 1.5);
    cylindricalShape(0.1, 0.1, 0.1, 0.05, 0.05, 0.05);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0,29,0);
    glScalef(1.5,0.4,1.5);
    glutSolidCube(1.0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0,30.2,0);
    glScalef(1.5,0.4,1.5);
    glutSolidCube(1.0);
    glPopMatrix();
}

void Objects::setNormal(GLfloat x1, GLfloat y1, GLfloat z1, GLfloat x2, GLfloat y2, GLfloat z2, GLfloat x3, GLfloat y3, GLfloat z3)
{
    GLfloat Ux, Uy, Uz, Vx, Vy, Vz, Nx, Ny, Nz;

    Ux = x2 - x1;
    Uy = y2 - y1;
    Uz = z2 - z1;

    Vx = x3 - x1;
    Vy = y3 - y1;
    Vz = z3 - z1;

    Nx = Uy * Vz - Uz * Vy;
    Ny = Uz * Vx - Ux * Vz;
    Nz = Ux * Vy - Uy * Vx;

    glNormal3f(-Nx, -Ny, -Nz);
}

long long Objects::nCr(int n, int r)
{
    if (r > n / 2)
        r = n - r; 
    long long ans = 1;
    int i;

    for (i = 1; i <= r; i++)
    {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
