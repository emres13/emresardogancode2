#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  
    ofBackground(0);
    ofSetFrameRate(30);
    ofSetVerticalSync(true);
    soundPlayer.loadSound("confnumb.mp3");

    soundPlayer.play();

    glEnable(GL_DEPTH_TEST); //enable depth comparisons and update the depth buffer
    ofDisableArbTex(); //needed for textures to work with gluSphere
   
    sun.loadImage("sun.jpg");
    earth.loadImage("earth.jpg");
    moon.loadImage("moon.png");
    
    //prepare quadric for sphere
    quadric = gluNewQuadric();
    gluQuadricTexture(quadric, GL_TRUE);
    gluQuadricNormals(quadric, GLU_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);


    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix();


    cam.begin();
    
    ofScale(1,-1);
    


    
    //Sun change origin to center
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 55);
    
    //Sun rotate sphere over time
    ofRotateY(ofGetFrameNum()-20);
    ofRotateX(-110);
    
    //Sun bind and draw texture
    sun.getTextureReference().bind();
    gluSphere(quadric, 500, 100, 100);
    
    
    //Earth change origin to center
    ofTranslate(ofGetWidth()/2, ofGetHeight()/ 2, 55);
    
    //Earth rotate sphere over time
    ofRotateY(ofGetFrameNum());
    ofRotateX(-30); //north pole facing up
    
    earth.getTextureReference().bind();
    gluSphere(quadric, 150, 100, 100);
    
    //Moon change origin to cente
    ofTranslate(ofGetWidth()/8, ofGetHeight()/8, 55);
    
    //Moon rotate sphere over time
    ofRotateY(ofGetFrameNum());
    ofRotateX(-90);
    
    moon.getTextureReference().bind();
    gluSphere(quadric, 30, 200, 200);
    
    ofPopMatrix();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
