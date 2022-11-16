#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * new_dog - the main function
 * @name: a variable
 * @age: a variable
 * @owner: a variable
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *d;

	d = malloc(sizeof(struct dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->owner = owner;
	return (d);
}
