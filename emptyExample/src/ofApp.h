#pragma once
#include "ofMain.h"
#include "particle.hpp"

class ofApp : public ofBaseApp {
public:
    void setup();
    void update();
    void draw();
    void createParticle();
    void keyPressed(int key);
    
    ofImage img;
    
    vector<Particle> particles;
};
