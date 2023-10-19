#include <string.h>
#include <stdio.h>

/**
 * _strncpy - Copy string src to string dest
 * @dest: Where to copy src
 * @src: The string to paste to dest
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, destlen = 0, srclen = 0;

	destlen = strlen(dest);
	srclen = strlen(src);
	for (i = 0; i < srclen; i++ )
	{
		if (i < n)
			dest[i] = src[i];
		else
			break;
	}

	if (srclen < n)
	{
		while (i < destlen)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
