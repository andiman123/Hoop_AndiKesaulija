#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleReaper.h"
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
	void move();
	
	void draw();

	void keyPressed(int key);

	vector<Particle*> particles;
	

	Particle* emit();
	vector<Particle> particles;
	


	Spawner();
	~Spawner();
};

