#ifndef WHALE_CONTAINER
#define WHALE_CONTAINER



#import "ofMain.h"
#import "ofxAVFVideoPlayer.h"
#import "Whale.h"
#include <iostream>



#define NUM_WHALES 3



class WhaleContainer {
    
    public:
    
        WhaleContainer();
        void update();
        void draw();
    
        void next(int i);
        void matrix();
    
        bool loaded;
    
    private:

        Whale* whale[NUM_WHALES];
    
        std::vector<ofxAVFVideoPlayer *> video_player;
        int active_whale;
};



#endif


