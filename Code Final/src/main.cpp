#include "testApp.h"

int main() {
    ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1400, 1600, OF_WINDOW);
	ofRunApp( new testApp());
}
