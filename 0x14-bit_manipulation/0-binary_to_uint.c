#include "main.h"

int _strlen(const char *str);
int _pow(int b, int p);

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: char ptr to a bit
 * Return: the converted int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i, len;

	i = 0;
	len = _strlen(b);
	while (b && b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += ((b[i] - '0') * _pow(2, --len));
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

/**
 * _pow - raise a num to a power @p
 * @p: the power
 * @b: base number
 * Return: int val
 */
int _pow(int b, int p)
{
	if (p == 0)
		return (1);

	if (b == 0)
		return (0);

	return (b * _pow(b, p - 1));
}
