#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    galaxy.loadImage("galaxy.jpg");

	ofSetFrameRate(30);
	ofSetVerticalSync(true);
	
	glEnable(GL_DEPTH_TEST); //enable depth comparisons and update the depth buffer
	ofDisableArbTex(); //needed for textures to work with gluSphere
	earth.loadImage("earth.jpg");
	
	//prepare quadric for sphere
	quadric = gluNewQuadric();
	gluQuadricTexture(quadric, GL_TRUE);
	gluQuadricNormals(quadric, GLU_SMOOTH);
    
    
}

//--------------------------------------------------------------
void testApp::update() {
    

}

//--------------------------------------------------------------
void testApp::draw() {
    
    //change origin to center
	ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);

	//rotate sphere over time
	ofRotateY(ofGetFrameNum());
	ofRotateX(-90); //north pole facing up

	//bind and draw texture
	earth.getTextureReference().bind();
	gluSphere(quadric, 200, 100, 100);

}


