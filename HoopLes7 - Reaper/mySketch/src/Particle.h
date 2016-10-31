#pragma once

#include "ofMain.h"

#define MAX_LIFETIME 2000
class Particle
{
protected:

	long lifetime;

public:
	
	ofPoint position;
	float radius;
	ofVec2f speed;
	//float lifetime;
	int color;
	

	ofColor centerColor;
	ofColor innterColor;
	ofColor outerColor;

	void Particlesetup(float posX, float posY, int col);
	void moveParticle(float moveX, float moveY);
	void draw();
	bool isDead();

	Particle();
	~Particle();
};

