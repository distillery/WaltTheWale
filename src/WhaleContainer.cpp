#include "WhaleContainer.h"



WhaleContainer::WhaleContainer() {
    
    whale[0] = new Whale("../../../_data/skin_alien.mov", "alien", false);
    whale[1] = new Whale("../../../_data/skin_nemo.mov", "nemo", false);
    whale[2] = new Whale("../../../_data/skin_matrix.mov", "matrix", true);
//    whale[0] = new Whale("skin_alien.mov", "alien");
//    whale[1] = new Whale("skin_nemo.mov", "nemo");
//    whale[2] = new Whale("skin_matrix.mov", "matrix");
   
    loaded = false;
    active_whale = 0;
}



void WhaleContainer::update() {
    
    if (!loaded) {
        loaded = true;
        for (int i=0; i<NUM_WHALES; i++) {
            whale[i]->load();
            if (!whale[i]->loaded) loaded = false;
            cout << whale[i]->name << ": " << whale[i]->loaded << endl;
        }
    }
    else {
        if (!whale[active_whale]->matrix_done) {
            //TODO whales keep updating (getposition-bar)
            whale[active_whale]->play();
        }
        else {
            active_whale = 0;
        }
    }
}



void WhaleContainer::draw() {
    
    whale[active_whale]->draw();
}



void WhaleContainer::next(int i) {
    if (!whale[active_whale]->matrix) {
        whale[active_whale]->stop();
        
        active_whale += i;
        if (active_whale==NUM_WHALES-1) active_whale = 0;
        if (active_whale < 0) active_whale = NUM_WHALES-2;
    }
}



void WhaleContainer::matrix() {
    if (!whale[active_whale]->matrix) {
        whale[active_whale]->stop();

        active_whale = NUM_WHALES-1;
        whale[active_whale]->matrix_done = false;
    }
}


