#pragma once

#include "ofMain.h"
#include "renderer.h"

class ofApp : public ofBaseApp{

	public:
		
		Renderer * renderer;

		void setup();
		void update();
		void draw();

		void keyReleased(int key);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
};
