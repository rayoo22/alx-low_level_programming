#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - the main function
 * @d: a variable
 * @name: a variable
 * @age: a variable
 * @owner: a variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
