#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofSetFrameRate(45);
    ofEnableAlphaBlending();
    ofBackground(255,255,255);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetWindowTitle(ofToString(ofGetFrameRate(),0));
    for (int i=0; i<particles.size(); i++) {
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0);
 
    
    
    for (int i=0; i<particles.size(); i++) {
        Particle &p = particles[i];
        p.draw();
    }
    
    for (int i=0; i<25; i++) {
        createParticle();
    }
    
    while (particles.size()>500) {
        particles.erase(particles.begin());
    }
    
}

void ofApp::createParticle() {
    Particle p;
    p.setup();
    p.pos.set(ofRandomWidth(), ofRandomHeight());
    p.color = img.getColor(p.pos.x,p.pos.y);
    particles.push_back(p);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    }
