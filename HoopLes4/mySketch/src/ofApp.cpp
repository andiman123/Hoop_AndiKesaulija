#include "ofApp.h"
#include <iostream>
#include <list>

//--------------------------------------------------------------
void ofApp::setup(){	 

	spawn.setup();
	bounceSpawn.setup();
}

//--------------------------------------------------------------
void ofApp::update(){

	
	spawn.move();
	spawn.update();

	bounceSpawn.move();
	bounceSpawn.update();
}

//--------------------------------------------------------------
void ofApp::draw(){


	spawn.draw();
	


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
