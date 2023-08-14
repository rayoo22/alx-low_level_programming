#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - dog structure
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: a structure of a dog
 */

struct dog{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
