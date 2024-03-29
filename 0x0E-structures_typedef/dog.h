#ifndef DOG_H
#define DOG_H

/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

/**
* struct_dog - structure for dogs
* @name: member 1
* @age: member 2
* @owner: member 3
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif