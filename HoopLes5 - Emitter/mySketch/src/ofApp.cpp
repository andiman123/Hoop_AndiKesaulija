#include "ofApp.h"
#include <iostream>
#include <list>

//--------------------------------------------------------------
void ofApp::setup(){	 
	ofBackground(0, 255, 0);
	spawn.setup();
	
}

//--------------------------------------------------------------
void ofApp::update(){

	
	spawn.move();
	spawn.update();

	
	//ofSetWindowTitle("Particle: " + spawn.particles.size);
	//printf(spawn.particles.max_size);
}

//--------------------------------------------------------------
void ofApp::draw(){

	
	spawn.draw();
	


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
