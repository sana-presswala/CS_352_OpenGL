#include "light.h"

void light()
{
    //use of glLightfv to add lighting and shading effect
    
    GLfloat light_ambient[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat light_diffuse[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat light_specular[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat light_position[] = {50.0, 50.0, 50.0, 1.0};

    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
}

void lighting1(float X, float Y, float Z, float intensity)
{
    GLfloat position[] = {X, Y, Z, 0.0}; // using directional source of light
    GLfloat noAmbient[] = {0.0f, 0.0f, 0.0f, 1.0f};
    GLfloat whiteDiffuse[] = {intensity, intensity, intensity, 1.0f};

    glEnable(GL_LIGHT7);
    glLightfv(GL_LIGHT7, GL_POSITION, position);
    glLightfv(GL_LIGHT7, GL_DIFFUSE, whiteDiffuse);
    glLightfv(GL_LIGHT7, GL_AMBIENT, noAmbient);
}


void lighting2(float X, float Y, float Z, float intensity)
{
    GLfloat position[] = {X, Y, Z, 0.0}; // using directional source of light
    GLfloat noAmbient[] = {0.0f, 0.0f, 0.0f, 1.0f};
    GLfloat whiteDiffuse[] = {intensity, intensity, intensity, 1.0f};

    glEnable(GL_LIGHT6);
    glLightfv(GL_LIGHT6, GL_POSITION, position);
    glLightfv(GL_LIGHT6, GL_DIFFUSE, whiteDiffuse);
    glLightfv(GL_LIGHT6, GL_AMBIENT, noAmbient);
}

void lighting3(float X, float Y, float Z, float intensity)
{
    GLfloat position[] = {X, Y, Z, 0.0}; // using directional source of light
    GLfloat noAmbient[] = {0.0f, 0.0f, 0.0f, 1.0f};
    GLfloat whiteDiffuse[] = {intensity, intensity, intensity, 1.0f};

    glEnable(GL_LIGHT5);
    glLightfv(GL_LIGHT5, GL_POSITION, position);
    glLightfv(GL_LIGHT5, GL_DIFFUSE, whiteDiffuse);
    glLightfv(GL_LIGHT5, GL_AMBIENT, noAmbient);
}

void lighting4(float X, float Y, float Z, float intensity)
{
    GLfloat position[] = {X, Y, Z, 0.0}; // using directional source of light
    GLfloat noAmbient[] = {0.0f, 0.0f, 0.0f, 1.0f};
    GLfloat whiteDiffuse[] = {intensity, intensity, intensity, 1.0f};

    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_POSITION, position);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, whiteDiffuse);
    glLightfv(GL_LIGHT0, GL_AMBIENT, noAmbient);
}



void spotLight1()
{
    glPushMatrix();

    // Adjusted to reduce yellowish tint and increase intensity
    GLfloat light_ambient[] = {01, 0.6, 0.3, 1.0}; // Less yellow ambient light
    GLfloat light_diffuse[] = {1.0, 1.0, 0.5, 1.0}; // Less yellow diffuse light, more intense
    GLfloat light_specular[] = {1.0, 1.0, 1.0, 1.0}; // White specular light
    GLfloat light_position[] = {50.0, 30.0, 0.0, 1.0}; 

    glLightfv(GL_LIGHT1, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular);

    glLightfv(GL_LIGHT1, GL_POSITION, light_position);
    GLfloat spot_direction[] = {-0.5, -1.0, 0.0}; // Adjust as needed
    glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, spot_direction);
    glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 70.0);

    // Attenuation parameters to control intensity falloff
    glLightf(GL_LIGHT1, GL_CONSTANT_ATTENUATION, 0.8f); // Adjust as needed
    glLightf(GL_LIGHT1, GL_LINEAR_ATTENUATION, 0.001f);  // Adjust as needed
    glLightf(GL_LIGHT1, GL_QUADRATIC_ATTENUATION, 0.0005f);  // Adjust as needed

    glPopMatrix();
}

void spotLight2()
{
    glPushMatrix();

    // Adjusted to reduce yellowish tint and increase intensity
    GLfloat light_ambient[] = {0.6, 0.6, 0.3, 1.0}; // Less yellow ambient light
    GLfloat light_diffuse[] = {0.9, 0.9, 0.5, 1.0}; // Less yellow diffuse light, more intense
    GLfloat light_specular[] = {1.0, 1.0, 1.0, 1.0}; // White specular light
    GLfloat light_position[] = {0.0, 30.0, 50.0, 1.0}; 

    glLightfv(GL_LIGHT2, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT2, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT2, GL_SPECULAR, light_specular);

    glLightfv(GL_LIGHT2, GL_POSITION, light_position);
    GLfloat spot_direction[] = {-0.5, -1.0, 0.0}; // Adjust as needed
    glLightfv(GL_LIGHT2, GL_SPOT_DIRECTION, spot_direction);
    glLightf(GL_LIGHT2, GL_SPOT_CUTOFF, 70.0);

    // Attenuation parameters to control intensity falloff
    glLightf(GL_LIGHT2, GL_CONSTANT_ATTENUATION, 0.8f); // Adjust as needed
    glLightf(GL_LIGHT2, GL_LINEAR_ATTENUATION, 0.001f);  // Adjust as needed
    glLightf(GL_LIGHT2, GL_QUADRATIC_ATTENUATION, 0.0005f);  // Adjust as needed

    glPopMatrix();
}

void spotLight3()
{
    glPushMatrix();

    // Adjusted to reduce yellowish tint and increase intensity
    GLfloat light_ambient[] = {0.6, 0.6, 0.3, 1.0}; // Less yellow ambient light
    GLfloat light_diffuse[] = {0.9, 0.9, 0.5, 1.0}; // Less yellow diffuse light, more intense
    GLfloat light_specular[] = {1.0, 1.0, 1.0, 1.0}; // White specular light
    GLfloat light_position[] = {50.0, 30.0, 100.0, 1.0}; 

    glLightfv(GL_LIGHT3, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT3, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT3, GL_SPECULAR, light_specular);

    glLightfv(GL_LIGHT3, GL_POSITION, light_position);
    GLfloat spot_direction[] = {-0.5, -1.0, 0.0}; // Adjust as needed
    glLightfv(GL_LIGHT3, GL_SPOT_DIRECTION, spot_direction);
    glLightf(GL_LIGHT3, GL_SPOT_CUTOFF, 70.0);

    // Attenuation parameters to control intensity falloff
    glLightf(GL_LIGHT3, GL_CONSTANT_ATTENUATION, 0.8f); // Adjust as needed
    glLightf(GL_LIGHT3, GL_LINEAR_ATTENUATION, 0.001f);  // Adjust as needed
    glLightf(GL_LIGHT3, GL_QUADRATIC_ATTENUATION, 0.0005f);  // Adjust as needed

    glPopMatrix();
}

void spotLight4()
{
    glPushMatrix();

    // Adjusted to reduce yellowish tint and increase intensity
    GLfloat light_ambient[] = {0.6, 0.6, 0.3, 1.0}; // Less yellow ambient light
    GLfloat light_diffuse[] = {0.9, 0.9, 0.5, 1.0}; // Less yellow diffuse light, more intense
    GLfloat light_specular[] = {1.0, 1.0, 1.0, 1.0}; // White specular light
    GLfloat light_position[] = {100.0, 30.0, 50.0, 1.0}; 

    glLightfv(GL_LIGHT4, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT4, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT4, GL_SPECULAR, light_specular);

    glLightfv(GL_LIGHT4, GL_POSITION, light_position);
    GLfloat spot_direction[] = {-0.5, -1.0, 0.0}; // Adjust as needed
    glLightfv(GL_LIGHT4, GL_SPOT_DIRECTION, spot_direction);
    glLightf(GL_LIGHT4, GL_SPOT_CUTOFF, 70.0);

    // Attenuation parameters to control intensity falloff
    glLightf(GL_LIGHT4, GL_CONSTANT_ATTENUATION, 0.8f); // Adjust as needed
    glLightf(GL_LIGHT4, GL_LINEAR_ATTENUATION, 0.001f);  // Adjust as needed
    glLightf(GL_LIGHT4, GL_QUADRATIC_ATTENUATION, 0.0005f);  // Adjust as needed

    glPopMatrix();
}
