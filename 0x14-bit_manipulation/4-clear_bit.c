#include "main.h"

/**
 * clear_bit - extract the bit at position @index
 * @n: ptr to number to extract the bit from
 * @index: the position of the bit to be extracted
 * Return: the extracted bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n  &= ~(1 << index);

	return (1);
}
