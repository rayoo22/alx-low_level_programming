#include "dog.h"
/**
 * print_dog - main function
 * @d: member
 * Description: print a struct dog
 */
void print_dog(struct dog *d)
{
	struct dog my_dog;
	d = &my_dog;

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age == NULL)
	{
		d->age = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);
}
