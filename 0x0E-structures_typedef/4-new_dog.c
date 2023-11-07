#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	
	newdog = malloc(sizeof(dog_t));
	if (!newdog)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
