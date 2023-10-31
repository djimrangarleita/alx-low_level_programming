#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Copy a string to a newly allocated space in the mem
 * @str: The string to copy
 * Return: Pointer to the newly allocated space or NULL
 */
char *_strdup(char *str)
{
	int i, size;
	char *ptr;

	if (str == NULL)
		return (NULL);

	i = 0;
	size = strlen(str);
	ptr = malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
