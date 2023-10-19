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
	int i = 0, j = 0, destlen = 0, srclen = 0;

	destlen = strlen(dest);
	srclen = strlen(src);
	while (dest[i] != '\0')
		i++;

	for (; i < destlen + srclen; i++)
	{
		if (j < n)
		{
			dest[i] = src[j];
			j++;
		}
	}

	return (dest);
}
