#pragma once



#include "ofMain.h"
#include "ofxSyphon.h"
#include "WhaleContainer.h"
#include "WheelContainer.h"
#include "GutsContainer.h"



#define NUM_FRAMES 30



class WaltTheWhale : public ofBaseApp {

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
    
        ofxSyphonServer syphon;
    
    private:
    
        WhaleContainer* whale_container;
        WheelContainer* wheel_container;
        GutsContainer* guts_container;
    
        void paramHandler(float& var, float val);
};


