#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Spawner.h"

class ofApp : public ofBaseApp{

	public:

		int ballcount;
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		Spawner spawn;

		Particle part1[];
		

		
};
