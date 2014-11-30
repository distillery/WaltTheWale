#ifndef GUTS_CONTAINER
#define GUTS_CONTAINER



#import "ofMain.h"
#import "ofxAVFVideoPlayer.h"
#import "Guts.h"
#include <iostream>



#define NUM_GUTS 2



class GutsContainer {
    
    public:
    
        GutsContainer();
        void update();
        void draw();
        void matrix();
    
        bool loaded;
    
    private:
    
        Guts* guts[NUM_GUTS];

        std::vector<ofxAVFVideoPlayer *> video_player;
        int active_guts;
};



#endif


