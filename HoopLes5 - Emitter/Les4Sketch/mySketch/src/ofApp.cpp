#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(ofColor::black);

	factort1 = ParticleFactory();
	factort1.setOrigin(100, 100);
	factort1.setCurvingParticleRatio(0.1);

	factort2 = ParticleFactory();
	factort2.setOrigin(400, 400);
	factort2.setCurvingParticleRatio(0.8);

}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < particles.size(); i++) {
		particles[i] -> move();
	}

	Particle* freshParticle1 = factort1.emit();
	particles.push_back(freshParticle1);

	Particle* freshParticle2 = factort2.emit();
	particles.push_back(freshParticle2);

}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < particles.size(); i++) {
		particles[i] -> draw();
	}

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
