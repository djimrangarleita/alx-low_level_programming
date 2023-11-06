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
	int i;
	char *nptr;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nptr = malloc(nmemb * size);
	ptr = malloc(nmemb * size);

	if (nptr == NULL || ptr == NULL)
		return (NULL);

	for (i = 0; i < (int)nmemb; i++)
		nptr[i] = '\0';

	memcpy(ptr, nptr, nmemb);
	free(nptr);

	return (ptr);
}
