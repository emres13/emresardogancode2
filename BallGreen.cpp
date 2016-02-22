#include "BallGreen.hpp"

void BallGreen::draw(){
    
    ofSetColor(ofColor::green);
    ofDrawCircle(x, y, dim);
    
}