#pragma once

#include "ofMain.h"

class Particle
{
public:
	ofPoint position;
	float radius;
	ofVec2f speed;
	float lifetime;
	int color;

	ofColor centerColor;
	ofColor innterColor;
	ofColor outerColor;

	void Particlesetup(float posX, float posY, int col);
	void moveParticle(float moveX, float moveY);
	void draw();


	Particle();
	~Particle();
};

