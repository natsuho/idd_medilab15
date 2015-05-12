#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(60);
    ofBackground(0);
    ofSetBackgroundAuto(false);    //haikeiwo kousin sinai
    
    
    for (int i=0; i<num; i++) {
        walker[i].position.x = ofRandom(ofGetWidth());
        walker[i].position.y = ofRandom(ofGetHeight());
        
        mesh.setMode(OF_PRIMITIVE_POINTS);
        
    }
    

    

}

//--------------------------------------------------------------
void ofApp::update(){

   
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0, 10);
    ofRect(0, 0, ofGetWidth(), ofGetHeight());
    mesh.clear();
    for (int i = 0; i<num; i++) {
        walker[i].draw();
        mesh.addColor(ofFloatColor(1.0,1.0,1.0));
        mesh.addVertex(walker[i].position);
    }

    mesh.draw();
    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
