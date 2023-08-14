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
		printf("Name: (nil)");
	}
	else if (d->age == NULL)
	{
		printf("Age: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	printf("Name: %s", d->name);
	printf("Age: %d", d->age);
	printf("Owner: %s", d->owner);
}
