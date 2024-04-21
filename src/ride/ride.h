#ifndef RIDE_H
#define RIDE_H

#include "../../libs.h"

#include "../shapes/shapes.h"
#include "../../bmpLoader.h"
#include "../human/human.h"

struct Ride {

    GLfloat alpha;
    GLfloat theta;

    GLfloat atwAlpha;
    GLfloat atwTheta;
    
    int rideTheta;

    int carouselTheta;

    Ride() {

        alpha = 0.0; 
        theta = 0.0;

        atwAlpha = -45.0;
        atwTheta = 0.0;

        rideTheta = 0;

        carouselTheta = 0;
    }

    void rideGround();

    void carousel();

    void animateRide(GLboolean carouselFlag);
};



#endif 
