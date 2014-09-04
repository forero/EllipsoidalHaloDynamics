#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
  Dynamics of a point particle inside of an ellipsoidal dark matter halo.
  
  Author: J.E. Forero-Romero
  Date: 4.09.2014
  
  Modifications:
  4.09.2014. Rough skeleton in main
*/

int main(int argc, char **argv){
  particle *Particle;
  potential *Potential;
  bounds *Bounds;

  Particle = create_particle();
  Potential = create_potential();
  Bounds = create_physical_bounds();

  
  move_particle_in_potential(Particle, Potential, Bounds);

  return 0;
}
