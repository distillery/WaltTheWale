#include "Guts.h"



Guts::Guts(string source, string name, bool matrix) {
    
    this->name = name;
    this->matrix = matrix;
    
    video = new ofxAVFVideoPlayer();
    video->loadMovie(source);
    
    loaded = false;
    matrix_done = false;
}



void Guts::load() {
    video->update();
    
    if (video->isLoaded()) {
        loaded = true;
    }
}



void Guts::play() {
    if (!matrix) {
        video->update();
        video->play();
    }
    else {
        cout << video->getPosition() << endl;
        
        if (video->getPosition() < 1.0) {
            video->update();
            video->play();
        }
        else { //TODO trigger ofEvent instead of param
            matrix_done = true;
        }
    }
}



void Guts::stop() {
    video->stop();
    video->setPosition(0);
}



void Guts::draw() {
    video->draw(870, 150, 386, 417);
    
    ofSetColor(ofColor::yellow);
    ofRect(870, 557, 386*video->getPosition(), 10);
    ofSetColor(255, 255, 255);
}


