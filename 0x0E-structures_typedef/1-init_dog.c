#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: dog struct
 * @name: char pointer, name of the dog
 * @age: float, age of dog
 * @owner: char pointer, owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
