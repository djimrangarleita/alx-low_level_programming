#include "main.h"
#include <stdio.h>

/**
 * get_bit - extract the bit at position @index
 * @index: the position of the bit to be extracted
 * Return: the extracted bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
