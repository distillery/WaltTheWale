#ifndef GUTS
#define GUTS



#import "ofMain.h"
#import "ofxAVFVideoPlayer.h"
#include <iostream>



class Guts {
    
    public:
    
        Guts(string source, string name, bool matrix);
        void load();
        void play();
        void stop();
        void draw();
    
        string name;
        bool loaded;
        bool matrix;
        bool matrix_done;
    
    private:
    
        ofxAVFVideoPlayer* video;
};



#endif


