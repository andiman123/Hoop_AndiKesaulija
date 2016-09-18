#include "Spawner.h"
#include <Windows.h>


Spawner::Spawner()
{
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 4);
}

void Spawner::setup() {

	angle = 0,05;
	speed = 0.01;
	radius = 200;
	timeSpawner = 2;
}

void Spawner::move() {
	

	position = ofPoint(ofGetWidth() / 2 + sin(angle) * radius, ofGetHeight() / 2 + cos(angle) * radius);
	angle = angle + speed;
	printf("%6.4lf", speed);
	printf("\n");
}

void Spawner::draw() {

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, 15);

}

Spawner::~Spawner()
{
}
