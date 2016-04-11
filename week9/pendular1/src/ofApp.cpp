#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // set screen frame rate
    ofSetFrameRate(60);
    
    // set initial values
    pos0 = ofPoint(512, 300);
    pos = ofPoint(600,200);
    velocity = ofPoint(100,0);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //constants
    float dt = 1.0/60; //timestep
    
    float mass = 0.2;
    
    float rubberLen = 200.0;
    
    float k = 0.5;
    
    ofPoint g(0.0, 9.8);
    
    // Hook force
    
    ofPoint delta = pos - pos0;
    
    float len = delta.length();
    
    float hookeValue = k*(len-rubberLen);
    delta.normalize();
    ofPoint hookeForce = delta*(-hookeValue);
    ofPoint force = hookeForce + g;
    ofPoint a = force/mass;
    velocity += a*dt;
    pos += velocity*dt;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 150, 0 );
    ofSetColor(255, 255, 255);
    ofDrawLine(pos0.x, pos0.y, pos.x, pos.y);
    ofSetColor(0, 100, 50);
    ofFill();
    ofDrawCircle(pos.x, pos.y, 60);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}