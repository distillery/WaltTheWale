#include "Wheel.h"



Wheel::Wheel(string source, ofPoint point, float speed, string name) {
    
    this->name = name;
    this->point = point;
    this->speed = speed;
    angle = 0;

    image.loadImage(source);
    image.setAnchorPercent(0.5, 0.5);
}



void Wheel::update(float speed) {
    angle += this->speed * speed; //TODO: finetune param input (walt)
}



void Wheel::draw() {
    ofPushMatrix();
    ofTranslate(point.x+50, point.y+50);
    ofRotate(angle);
    image.draw(0, 0, 100, 100);
    ofPopMatrix();
}


