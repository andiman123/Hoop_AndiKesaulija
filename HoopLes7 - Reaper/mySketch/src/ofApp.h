#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Spawner.h"
#include "ParticleReaper.h"



class ofApp : public ofBaseApp{

private:
	vector<Particle*> particles;
	public:

		
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		Spawner spawn;
		Spawner bounceSpawn;
		ParticleReaper reaper;

		//Heap?
		//Particle* part1 = new Particle();
		
		
	

		
};
