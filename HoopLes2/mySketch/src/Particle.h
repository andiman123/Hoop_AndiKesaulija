#pragma once

#include "ofMain.h"

class Particle
{
public:
	ofPoint position;
	float radius;
	ofVec2f speed;
	float lifetime;

	ofColor centerColor = ofColor::white;
	ofColor innterColor;
	ofColor outerColor;
	
	void Particlesetup(float posX, float posY);
	void move(float moveX, float moveY);
	void draw();


	Particle();
	~Particle();
};

