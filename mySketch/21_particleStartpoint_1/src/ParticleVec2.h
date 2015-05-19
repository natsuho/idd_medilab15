#pragma once
#include "ofMain.h"

class ParticleVec2 {
public:
    ParticleVec2();
    void update();
    void draw();
    void addForce(ofVec2f force);
    void bounceOfWalls();
    
    ofVec2f velocity ;
    ofVec2f acceleracion ;   //kasokudo
    ofVec2f position ;
    float mass;  //situryou
    float radius ;
    float friction ;   //masatu
    
    
};