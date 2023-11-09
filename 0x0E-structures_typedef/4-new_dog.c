#include <stdlib.h>
#include "dog.h"
#include <string.h>

char *_strcpy(char *dest, char *src);

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

	if (!name || !owner)
		return (NULL);

	newdog = malloc(sizeof(dog_t));

	if (!newdog)
		return (NULL);

	newdog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (!newdog->owner)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->age = age;
	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);

	return (newdog);
}

/**
 * _strcpy - copy string src to dest
 * @dest: pointer to dest location, array of char
 * @src: pointer to src, array chars
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
