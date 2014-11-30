#include "Whale.h"



Whale::Whale(string source, string name, bool matrix) {

    this->name = name;
    this->matrix = matrix;
    
    video = new ofxAVFVideoPlayer();
    video->loadMovie(source);
    
    loaded = false;
    matrix_done = false;
}



void Whale::load() {
    video->update();

    if (video->isLoaded()) {
        loaded = true;
    }
}



void Whale::play() {
    
    if (!matrix) {
        video->update();
        video->play();
    }
    else {
        if (video->getPosition() < 1.0) {
            video->update();
            video->play();
        }
        else { //TODO trigger ofEvent instead of param
            matrix_done = true;
        }
    }

    cout << name << " / " << video->getPosition() << endl;
}



void Whale::stop() {
    video->stop();
    video->setPosition(0);
}



void Whale::draw() {
    video->draw(0, 150, 860, 540);
    
    ofSetColor(ofColor::yellow);
    ofRect(0, 680, 860*video->getPosition(), 10);
    ofSetColor(255, 255, 255);
}


