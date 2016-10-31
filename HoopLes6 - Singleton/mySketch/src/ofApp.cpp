#include "ofApp.h"
#include <iostream>
#include <list>

//--------------------------------------------------------------
void ofApp::setup(){	 
	ofBackground(127, 127, 127);
	spawn = Spawner::instance();
	
}

//--------------------------------------------------------------
void ofApp::update(){

		Particle* freshParticle = spawn->emit();
	
	

	
	//ofSetWindowTitle("Particle: " + spawn.particles.size);
	//printf(spawn.particles.max_size);
}

//--------------------------------------------------------------
void ofApp::draw(){

	
	spawn->draw();
	


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
