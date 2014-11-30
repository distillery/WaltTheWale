#ifndef CUBE
#define CUBE



#import "ofMain.h"
#include <iostream>



class Cube {
    
    public:
    
        Cube(ofPoint p1, ofPoint p2);
        void update(ofImage img);
        ofImage draw();
    
        ofPoint p1;
        ofPoint p2;
    
    private:
    
        ofImage img;
    
};



#endif