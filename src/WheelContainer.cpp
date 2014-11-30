#include "WheelContainer.h"



WheelContainer::WheelContainer() {
    
    wheel[0] = new Wheel("../../../_data/wheel1.png", ofPoint(0, 0), 1, "wheel_01");
    wheel[1] = new Wheel("../../../_data/wheel1.png", ofPoint(120, 0), 2, "wheel_02");
    wheel[2] = new Wheel("../../../_data/wheel1.png", ofPoint(240, 0), 3, "wheel_03");
    wheel[3] = new Wheel("../../../_data/wheel1.png", ofPoint(360, 0), 4, "wheel_04");
    wheel[4] = new Wheel("../../../_data/wheel2.png", ofPoint(480, 0), 1, "wheel_05");
    wheel[5] = new Wheel("../../../_data/wheel2.png", ofPoint(600, 0), 2, "wheel_06");
    wheel[6] = new Wheel("../../../_data/wheel2.png", ofPoint(720, 0), 3, "wheel_07");
    wheel[7] = new Wheel("../../../_data/wheel2.png", ofPoint(840, 0), 4, "wheel_08");
//    wheel[0] = new Wheel("wheel1.png", ofPoint(0, 0), 1, "wheel_01");
//    wheel[1] = new Wheel("wheel1.png", ofPoint(120, 0), 2, "wheel_02");
//    wheel[2] = new Wheel("wheel1.png", ofPoint(240, 0), 3, "wheel_03");
//    wheel[3] = new Wheel("wheel1.png", ofPoint(360, 0), 4, "wheel_04");
//    wheel[4] = new Wheel("wheel2.png", ofPoint(480, 0), 1, "wheel_05");
//    wheel[5] = new Wheel("wheel2.png", ofPoint(600, 0), 2, "wheel_06");
//    wheel[6] = new Wheel("wheel2.png", ofPoint(720, 0), 3, "wheel_07");
//    wheel[7] = new Wheel("wheel2.png", ofPoint(840, 0), 4, "wheel_08");
    
    speed = 1;
}



void WheelContainer::update() {

    for (int i=0; i<NUM_WHEELS; i++) {
        wheel[i]->update(speed);
    }
}


void WheelContainer::draw() {

    for (int i=0; i<NUM_WHEELS; i++) {
        wheel[i]->draw();
    }
}



void WheelContainer::speedup(int i) {
    speed += i;
    if (speed<1) speed = 1;
}


