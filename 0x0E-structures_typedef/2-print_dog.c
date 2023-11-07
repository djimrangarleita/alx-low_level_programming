#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog's attributes
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	char *mynil = "(nil)";

	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : mynil);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : mynil);
	}
}
