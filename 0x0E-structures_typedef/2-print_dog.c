#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - the main function
 * @d: a variable
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			print("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
