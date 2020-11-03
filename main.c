#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "material.h"

void main(){
	srand(time(NULL));
	struct material *m;
	m=new_material("Material x", rand());
	printf("New material with random density\n");
	print_material(m);
	update_density(m, rand());
	printf("Material updated with new random density\n");
	print_material(m);
	free(m);
}