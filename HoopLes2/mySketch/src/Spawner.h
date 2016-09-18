#pragma once

#include "ofMain.h"
class Spawner
{
public:

	ofPoint position;
	float timeSpawner;

	float angle;
	float speed;
	int radius;

	void setup();
	void move();
	void draw();

	ofColor centerColor = ofColor::red;

	Spawner();
	~Spawner();
};

