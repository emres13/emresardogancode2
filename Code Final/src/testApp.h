#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"

class testApp : public ofBaseApp{
public:

	void setup();
	void update();
	void draw();
	
	ofImage earth;
    ofImage galaxy;
	GLUquadricObj *quadric;
};


#endif
