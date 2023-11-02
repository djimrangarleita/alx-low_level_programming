#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to be allocated
 * Return: Pointer to the memory or exit(98)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
