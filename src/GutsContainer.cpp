#include "GutsContainer.h"



GutsContainer::GutsContainer() {
    
    guts[0] = new Guts("../../../_data/guts_normal.mov", "machine", false);
    guts[1] = new Guts("../../../_data/guts_action.mov", "machine", true);
//    guts[0] = new Guts("guts_normal.mov", "machine");
//    //guts[1] = new Guts("../../../_data/guts_action.mov", "machine");
    
    active_guts = 0;
}



void GutsContainer::update() {

    if (!loaded) {
        loaded = true;
        for (int i=0; i<NUM_GUTS; i++) {
            guts[i]->load();
            if (!guts[i]->loaded) loaded = false;
            cout << guts[i]->name << ": " << guts[i]->loaded << endl;
        }
    }
    else {
        if (!guts[active_guts]->matrix_done) {
            //TODO whales keep updating (getposition-bar)
            guts[active_guts]->play();
        }
        else {
            active_guts = 0;
        }
    }
}


void GutsContainer::draw() {
    
    guts[active_guts]->draw();
}



void GutsContainer::matrix() {
    if (!guts[active_guts]->matrix) {
        guts[active_guts]->stop();

        active_guts = NUM_GUTS-1;
        //whale[active_guts]->matrix_done = false;
    }
}
