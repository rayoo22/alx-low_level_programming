#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

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

/**
 * dot_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
