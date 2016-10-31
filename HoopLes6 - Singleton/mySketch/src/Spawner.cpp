#include "Spawner.h"
#include <Windows.h>

Spawner* Spawner::instance() {
	if (!theOnlyOne) {
		theOnlyOne = new Spawner();
	}
	return theOnlyOne;
}
Particle* Spawner::emit() {
	Particle*newParticle;

	newParticle = new Particle();
	return newParticle;
}


Spawner::Spawner()
{
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 4);
}

void Spawner::setup() {
	
	for (int i = 0; i < ballcount; i++) {

		particles.push_back(Particle());
	}
	for (vector<Particle>::iterator i = particles.begin(); i != particles.end(); i++) {
		i->Particlesetup(position.x, position.y,ofRandom(0,2));
	}
	random = ofRandom(0, 10);
	angle = 0.05;
	speed = 0.01;
	radius = 200;
	timeSpawner = 2;
}

void Spawner::update() {
	for (vector<Particle>::iterator i = particles.begin(); i != particles.end(); i++) {
		i->moveParticle(position.x, position.y);
	}
}
void Spawner::move(int direc) {
	
	if (direc == 0) {
		speed = -speed;
	}

	position = ofPoint(ofGetWidth() / 2 + sin(angle) * radius, ofGetHeight() / 2 + cos(angle) * radius);
	angle = angle + speed;
	
	
	//printf("%6.4lf", speed);
	//printf("\n");
}


void Spawner::draw() {
	
	
		for (vector<Particle>::iterator i = particles.begin(); i != particles.end(); i++) {
			i->draw();
		}
	//drawCircle
	ofSetColor(ofColor(0, 0, 0, 255));
	ofDrawCircle(position.x, position.y, 15);

}
void Spawner::keyPressed(int key) {
	for (int i = 0; i < ballcount; i++) {
		particles.push_back(Particle());
	}
}
Spawner::~Spawner()
{
}
