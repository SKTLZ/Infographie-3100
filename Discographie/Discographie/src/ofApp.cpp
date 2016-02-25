#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//Load des images
	odesza.load("ODESZA_01.jpg");
	odeszai.load("ODESZA_02.jpg");
	purity.load("Purity_01.jpg");
	chainsmokers.load("chainesmokers_01.jpg");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	//Resolution : 600,600
	odesza.draw(0,0,300,300);
	odeszai.draw(300, 0, 300, 300);
	purity.draw(300, 300, 300, 300);
	chainsmokers.draw(0, 300, 300, 300);

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
