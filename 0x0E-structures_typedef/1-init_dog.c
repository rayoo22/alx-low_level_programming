#include "dog.h"
/**
 * init_dog - initializes a variable type dog
 * @d: pointer to a variable of type struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: initializes a variable type dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
