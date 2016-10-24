#include "Particle.h"


Particle::Particle()
{
	//radius = ofRandom(0, 20);
	//position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	//speed = ofVec2f(ofRandom(-15, 15), ofRandom(-15, 15));

	//innterColor = ofColor(255, 127, 255, 50);
	//outerColor = ofColor(31, 43, 245, 200);
	//lifetime = 0;

}

void Particle::Particlesetup(float posX, float posY) {

	
	lifetime = 0;
	radius = ofRandom(0, 20);
	position = ofPoint(posX, posY);
	speed = ofVec2f(ofRandom(-15, 15), ofRandom(-15, 15));

	innterColor = ofColor(255, 0, 0, 50);
	outerColor = ofColor(255, 0, 0, 10);
	printf("Spawn");
	
}

void Particle::moveParticle(float moveX, float moveY) {
	position += speed/20;
	
	//printf("%lu", lifetime);
	
	
	lifetime += 0.1;
	if (lifetime > ofRandom(20, 40)) {
		
		Particlesetup(moveX, moveY);
		
	}
}

void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innterColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, 3);

}

Particle::~Particle()
{
	
}
