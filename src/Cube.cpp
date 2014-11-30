#include "Cube.h"



Cube::Cube(ofPoint p1, ofPoint p2) {
    this->p1 = p1;
    this->p2 = p2;
}



void Cube::update(ofImage img) {
    this->img = img;
}



ofImage Cube::draw() {
    return img;
}


