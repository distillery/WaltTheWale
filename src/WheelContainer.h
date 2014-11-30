#ifndef WHEEL_CONTAINER
#define WHEEL_CONTAINER



#import "ofMain.h"
#import "Wheel.h"
#include <iostream>



#define NUM_WHEELS 8



class WheelContainer {
  
    public:
        WheelContainer();
        void update();
        void draw();
        void speedup(int i);
    
    private:
        Wheel* wheel[NUM_WHEELS];
        int speed;
    
};



#endif


