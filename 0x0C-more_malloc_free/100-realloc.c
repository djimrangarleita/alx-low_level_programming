#include <stdlib.h>
#include <string.h>

/**
 * _realloc - allocate mem to an array of @nmemb elt of size @size each
 * @old_size: old size of ptr
 * @newsize: size of new mem block
 * @ptr: pointer to old block
 * Return: void pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int newsize)
{
	void *newptr;

	if (newsize == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (newsize == old_size)
		return (ptr);

	newptr = malloc(newsize);
	if (ptr == NULL)
		return (newptr);

	memcpy(newptr, ptr, old_size);
	free(ptr);

	return (newptr);
}
