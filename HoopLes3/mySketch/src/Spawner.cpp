#include "Spawner.h"
#include <Windows.h>


Spawner::Spawner()
{
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 4);
}

void Spawner::setup() {
	/*
	for (int i = 0; i < ballcount; i = i + 1) {
		part1[i] = Particle();
	}
	*/

	angle = 0,05;
	speed = 0.01;
	radius = 200;
	timeSpawner = 2;
}

void Spawner::update() {
	for (int i = 0; i < ballcount; i = i + 1) {
		part1[i].move(position.x, position.y);
	}
}
void Spawner::move() {
	

	position = ofPoint(ofGetWidth() / 2 + sin(angle) * radius, ofGetHeight() / 2 + cos(angle) * radius);
	angle = angle + speed;
	printf("%6.4lf", speed);
	printf("\n");
}

void Spawner::draw() {

	for (int i = 0; i < ballcount; i = i + 1) {
		part1[i].draw();
	}

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, 15);

}

Spawner::~Spawner()
{
}
