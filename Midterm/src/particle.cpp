#include "particle.hpp"

void Particle::setup() {
    vel.x = 3*ofRandomf();
    vel.y = 3/ofRandomf();
    angle = ofRandomf()*TWO_PI;
    age = 10;
}

void Particle::draw() {
    ofSetColor(color,ofMap(age,10,45,70,10,true));
    ofdCircle(oldpos,pos,1/2);
}

void Particle::update() {
    angle += ofSignedNoise(pos.x, pos.y)*TWO_PI;
    
    vel.rotate(angle); //straight up&down
    
    oldpos = pos; //straight from corner if comment out
    
    pos -= vel;
    age++;
}
