#pragma once

#include "ofMain.h"
#include "Particle.h"

#define ballcount 40

class Spawner
{
public:

	ofPoint position;
	float timeSpawner;
	float random;
	float angle;
	float speed;
	int radius;

	void setup();
	void update();
	void move(int direc);
	
	void draw();

	void keyPressed(int key);

	

	Particle* emit();
	vector<Particle> particles;


	Spawner();
	~Spawner();
};

