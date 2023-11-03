#include <stdlib.h>

/**
 * _calloc - allocate mem to an array of @nmemb elt of size @size each
 * @nmemb: elt of the array
 * @size: size of each array elt
 * Return: void pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int newsize)
{
	if(newsize == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}
	if (newsize == old_size)
		return (ptr);
	return (ptr);
}
