#include "main.h"

int _strlen(const char *str);

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: char ptr to a bit
 * Return: the converted int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i;

	i = 0;
	/* len = _strlen(b); */
	while (b && b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += ((b[i] - '0'));
		i++;
	}

	return (num);
}

/**
 * _strlen - return length of a given string
 * @str: ptr to the string
 * Return: int, length of @str
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str && str[i] != '\0')
	{
		i++;
	}

	return (i);
}
