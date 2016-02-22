#pragma once

#include "ofMain.h"
#include "Ball.hpp"
#include "BallRed.hpp"
#include "BallGreen.hpp"
#include "BallBlue.hpp"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    BallRed redBall;
    BallGreen greenBall;
    BallBlue blueBall;
    
};