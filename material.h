#ifndef MATERIAL_H
#define MATERIAL_H

struct material {
	char name[50];
	int density;
};

void print_material(struct material*);
struct material *new_material(char *, int);
void update_density(struct material*, int);

#endif
