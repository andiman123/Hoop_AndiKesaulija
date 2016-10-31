#pragma once

#include "ofMain.h"
#include "Particle.h"

#define ballcount 40

class Spawner
{
private:
	static Spawner* theOnlyOne;
public:

	static Spawner* instance();
	

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

