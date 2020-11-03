#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "material.h"

void print_material(struct material *m){
	printf("material: %s\tdensity: %d\n", m->name, m->density);
}

struct material *new_material(char *n, int d) {

  struct material *nm;

  nm = malloc( sizeof(struct material) );

  strncpy(nm->name, n, sizeof(nm->name)-1);
  nm->density = d;

  return nm;
}

void update_density(struct material *m, int nd){
	m->density=nd;
}
