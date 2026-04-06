#include "particle.h"

int Particle::lastID = 0;

Particle::Particle() 
{
    id = lastID;
    lastID++;
}