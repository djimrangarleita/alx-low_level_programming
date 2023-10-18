#include <string.h>

/**
 * _strncat - Concatenate 2 strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of chars to append
 * Return: Pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, len = 0;

	while (dest[i] != '\0')
		i++;

	len = strlen(dest);
	for (; i < len + n; i++)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);
}
