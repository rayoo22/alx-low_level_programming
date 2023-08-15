#include "dog.h"

/**
 * init_dog - main function
 * @d: first member
 * @name: second member
 * @age: third member
 * @owner: fourth member
 * Description: initializes a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name
	d->age = age;
	d->owner = owner;
}
