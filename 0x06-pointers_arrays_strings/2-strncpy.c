#include <string.h>

/**
 * _strncpy - Copy string src to string dest
 * @dest: Where to copy src
 * @src: The string to paste to dest
 * @n: number of char to copy from src
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, srclen = 0;

	srclen = strlen(src);
	for (i = 0; i < srclen; i++)
	{
		if (i < n)
			dest[i] = src[i];
		else
			break;
	}

	if (srclen < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
