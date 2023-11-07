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
	char *dname, *oname;
	int lname = 0, lowner = 0;

	if (name)
		lname = strlen(name);
	if (owner)
		lowner = strlen(owner);

	dname = malloc(sizeof(char) * lname);
	oname = malloc(sizeof(char) * lowner);

	newdog = malloc(sizeof(dog_t));

	if (!dname || !oname || !newdog)
		return (NULL);

	dname = name;
	oname = owner;

	newdog->name = dname;
	newdog->age = age;
	newdog->owner = oname;

	return (newdog);
}