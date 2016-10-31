#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Spawner.h"



class ofApp : public ofBaseApp{

	public:

		
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		

		Spawner* spawn;
		//Spawner bounceSpawn;

		//Heap?
		//Particle* part1 = new Particle();
		
		
		

		
};
