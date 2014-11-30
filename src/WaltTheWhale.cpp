#include "WaltTheWhale.h"



void WaltTheWhale::setup(){

    // GENERAL
    ofSetFrameRate(NUM_FRAMES);
    ofSetWindowTitle("WALT_THE_WHALE");
    //ofEnableAlphaBlending();
    
    // ARDUINO
    
    
    
    // SYPHON
    syphon.setName("WALT_THE_WHALE");
    
    // WHALES
    whale_container = new WhaleContainer();
    
    // WHEELS
    wheel_container = new WheelContainer();
    
    // GUTS
    guts_container = new GutsContainer();
}



void WaltTheWhale::update(){

    //WHALES
    whale_container->update();

    // WHEELS
    wheel_container->update();
    
    // GUTS
    guts_container->update();
}



void WaltTheWhale::draw(){

    //SYPHON
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    ofBackground(255, 255, 255, 255);
    
    //WHALES
    whale_container->draw();
    
    // WHEELS
    wheel_container->draw();
    
    // GUTS
    guts_container->draw();

	syphon.publishScreen();
}



void WaltTheWhale::keyPressed(int key) {

    // CHANGE WHALE (left-right)
    if (key==OF_KEY_RIGHT) whale_container->next(1);
    if (key==OF_KEY_LEFT) whale_container->next(-1);

    // CHANGE SPEED (up-down)
    if (key==OF_KEY_UP) wheel_container->speedup(1);
    if (key==OF_KEY_DOWN) wheel_container->speedup(-1);
    
    // GO MATRIX (return)
    if (key==OF_KEY_RETURN) {
        whale_container->matrix();
        guts_container->matrix();
    }
}



void WaltTheWhale::paramHandler(float& var, float val) {
    var += val * 51;
    if (var >= 255) var = 255;
    else if (var < 0) var = 0;
}


