#include "ofApp.h"
#include <iostream>
#include <list>

//--------------------------------------------------------------
void ofApp::setup(){	 
	ofBackground(127, 127, 127);
	spawn.setup();
	
}

//--------------------------------------------------------------
void ofApp::update(){

	
	spawn.move();
	spawn.update();

	reaper.cleanup(particles);

	ofSetWindowTitle("Particles: " + ofToString(spawn.particles.size()));
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
