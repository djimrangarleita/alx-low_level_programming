#include <stdio.h>

/**
 * get_endianness - determine the endianness of the machine
 * Return: 0 if big endian, 1 otherwise
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);

	return (0);
}
