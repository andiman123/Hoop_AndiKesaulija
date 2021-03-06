#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "CurvingParticle.h"

class ofApp : public ofBaseApp {

    public:
        void setup();

        void update();

        void draw();

        void keyPressed(int key);

        Particle part1;
        CurvingParticle part2;
};
