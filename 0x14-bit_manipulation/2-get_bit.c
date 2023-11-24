#include "main.h"
#include <stdio.h>

/**
 * get_bit - extract the bit at position @index
 * @n: number to extract the bit from
 * @index: the position of the bit to be extracted
 * Return: the extracted bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	return ((n >> index) & 1);
}
