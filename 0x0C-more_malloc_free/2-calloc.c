#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate mem to an array of @nmemb elt of size @size each
 * @nmemb: elt of the array
 * @size: size of each array elt
 * Return: void pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	return (ptr);
}
