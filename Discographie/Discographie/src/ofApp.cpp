#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){

	renderer = new Renderer();
	renderer->setup();

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	renderer->draw();

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == ' ')
		renderer->Export("export", "png");
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
	renderer->resize();
}


//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
