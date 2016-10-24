#pragma once

#include "ofMain.h"
#include "Particle.h"

#define ballcount 40

class Spawner
{
public:

	ofPoint position;
	float timeSpawner;

	float angle;
	float speed;
	int radius;

	void setup();
	void update();
	void move();
	void draw();

	ofColor centerColor = ofColor::red;
	Particle part1[ballcount];


	Spawner();
	~Spawner();
};

