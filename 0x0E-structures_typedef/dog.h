#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct
 * @name: a variable
 * @owner: a variable
 * @age: a variable
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
