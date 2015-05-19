#include "ParticleVec2.h"

ParticleVec2::ParticleVec2(){
    position.set(ofGetWidth()/2.0,ofGetHeight()/2.0);
    velocity.set(0,0);
    acceleracion.set(0.0);
    mass = 1.0 ;
    radius = 5.0 ;
    friction = 0.01 ;
    

}

void ParticleVec2::update(){
    
    acceleracion = acceleracion - velocity * friction ;   
    velocity = velocity + acceleracion ;    //sokudo
    position = position + velocity ;
    acceleracion.set(0.0);  //kasoku situdukenai tame
    //bounceOfWalls();
    
}

void ParticleVec2::draw(){
    
    ofCircle(position.x, position.y, radius);

}


void ParticleVec2::addForce(ofVec2f force){
    
    acceleracion = acceleracion + force / mass ;
}


void ParticleVec2::bounceOfWalls(){
    
    if (position.x < 0) {
        velocity.x *= -1 ;
        position.x = 0 ;
    }
    if (position.x >ofGetWidth()) {
        velocity.x *= -1 ;
        position.x = ofGetWidth();
    }
    if (position.y <0) {
        velocity.y *= -1 ;
        position.y = 0 ;
    }
    if (position.y >ofGetHeight()) {
        velocity.y *= -1 ;
        position.y = ofGetHeight();
    }
}