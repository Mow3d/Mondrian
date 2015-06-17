#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255,255,255);

}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //Dibujo de los cuadros de colores
    
    ofSetColor(200,20,0);
    ofRect(1,0,200,200);
    
    ofSetColor(0,200,0);
    ofRect(201,0,200,200);
    
    ofSetColor(200,220,0);
    ofRect(401,0,400,200);
    
    ofSetColor(255,255,255);
    ofRect(800,0,225,200);
    
    ofSetColor(0,0,250);
    ofRect(0,200,120,400);
    
    ofSetColor(250,0,0);
    ofRect(600,200,420,400);
    
    ofSetColor(200,200,0);
    ofRect(0,600,250,200);
    
    ofSetColor(0,200,0);
    ofRect(250,600,800,200);
    
  //.......................................
    
    
    //Dibujo de las lineas negras
    
    //Horizontal Superior
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(0,2,1024,2);
    
    //Horizontal Inferior
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(0,767,1024,767);
    
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(200, 0, 200, 200);
    
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(400, 0, 400, 200);
    
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(800, 0, 800, 200);
    
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(0,200,1024,200);
    
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(120,200,120,600);
    
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(0,600,1024,600);
    
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(600,200,600,600);
    
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(250,600,250,800);
    
    //Vertical Izquierda
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(3,0,3,1024);
    
    //Vertical Derecha
    ofSetLineWidth(8);
    ofSetColor(0, 0, 0);
    ofLine(1020,0,1020,1024);
    

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
