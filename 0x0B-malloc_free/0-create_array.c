#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it with @c
 * @size: size of the array
 * @c: the char to be filled in the array
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
