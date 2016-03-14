#include "BallRed.hpp"

void BallRed::draw(){
    
    ofSetColor(ofColor::red);
    ofDrawCircle(x, y, dim);
    
}