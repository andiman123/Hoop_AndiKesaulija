#include "ofApp.h"
#include <iostream>
#include <list>

//--------------------------------------------------------------
void ofApp::setup(){

	//part1 = Particle();
	ballcount = 40;

	for (int i = 0; i < ballcount; i = i + 1) {
		part1[i] = Particle();
	}
	spawn.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	//part1.move();
	for (int i = 0; i < ballcount; i = i + 1) {
		part1[i].move(spawn.position.x,spawn.position.y);
	}
	spawn.move();
}

//--------------------------------------------------------------
void ofApp::draw(){
	//part1.draw();
	for (int i = 0; i < ballcount; i = i + 1) {
		part1[i].draw();
	}

	spawn.draw();


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
