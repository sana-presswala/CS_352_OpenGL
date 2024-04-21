#ifndef OBJECTS_H
#define OBJECTS_H

#include "../../libs.h"

#include "../shapes/shapes.h"
#include "../../bmpLoader.h"


const int nt = 60;
const int ntheta = 20;
const double PI = 3.14159265389;

struct Objects {

    GLboolean switchOne;
    GLboolean switchTwo;
    GLboolean switchThree;
    GLboolean switchFour;
    GLboolean switchFive;

    GLboolean xflag;
    GLboolean yflag;
    GLfloat xf ;
    GLfloat yf ;

    GLboolean controlPointsFlag;

    GLUquadric *quad;

    Objects() {
        switchOne = switchTwo = switchThree = switchFour = switchFive = false;
        xflag = yflag = false;
        xf = yf = 0;
        controlPointsFlag = false;
    }
    
    
    void bench();
    void statue();
    void slide1();
    void slide2();
    void slide3();
    void Tree();
    void Trees();
    void Shed();

    void bush();
    
    void cafeteriaFence();
    void cafeteria();

    void lampPost1();
    void lampPost2();
    void lampPost3();
    void lampPost4();

    void block1();
    void block2();
    void walls();
    
    void setNormal(GLfloat x1, GLfloat y1, GLfloat z1, GLfloat x2, GLfloat y2, GLfloat z2, GLfloat x3, GLfloat y3, GLfloat z3);
    long long nCr(int n, int r);
};

#endif

