#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    planet.Init(30);
    ofBackground(255,255,255);
}

//--------------------------------------------------------------
void ofApp::update(){
    planet.Update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    planet.Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    planet.SetMousePos(ofPoint(x,y));
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    planet.AddShape();
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
