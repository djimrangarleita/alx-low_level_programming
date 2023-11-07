#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int lname = 0, lowner = 0;

	if (name)
		lname = strlen(name);
	if (owner)
		lowner = strlen(owner);

	newdog = malloc(sizeof(dog_t));

	if (!newdog)
		return (NULL);

	newdog->age = age;
	if (lname)
	{
		newdog->name = malloc(lname * sizeof(char));
		strcpy(newdog->name, name);
	}
	else
	{
		newdog->name = NULL;
	}
	if (lowner)
	{
		newdog->owner = malloc(lowner * sizeof(char));
		strcpy(newdog->owner, owner);
	}
	else
	{
		newdog->owner = NULL;
	}

	return (newdog);
}
