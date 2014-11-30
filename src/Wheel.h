#ifndef WHEEL
#define WHEEL



#import "ofMain.h"
#include <iostream>



class Wheel {
    
    public:
    
        Wheel(string source, ofPoint point, float speed, string name);
        void update(float speed);
        void draw();
    
    private:
    
        ofImage image;
        ofPoint point;
        float speed;
        float angle;
        string name;
};



#endif