#include "main.h"
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: char ptr to a bit
 * Return: the converted int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i, len;

	i = 0;
	len = strlen(b);
	while (b && b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += ((b[i] - '0') * (pow(2, --len)));
		i++;
	}

	return (num);
}
