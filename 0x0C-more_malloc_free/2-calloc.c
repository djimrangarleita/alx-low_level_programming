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
	unsigned int i;
	void *ptr;
	int *nptr;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);
	nptr = malloc(nmemb * size);

	if (!nptr || !ptr)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		nptr[i] = 0;
	}

	memcpy((int *)ptr, nptr, nmemb);

	free(nptr);

	return (ptr);
}
