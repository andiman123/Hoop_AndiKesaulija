#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Spawner.h"

#define ballcount 40

class ofApp : public ofBaseApp{

	public:

		
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		Spawner spawn;

		//Heap?
		//Particle* part1 = new Particle();
		
		Particle part1 [ballcount];
		

		
};
