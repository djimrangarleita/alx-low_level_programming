#include "main.h"

/**
 * flip_bits - check the number of bits to be flipped to get from @n to @m
 * @n: number to check
 * @m: number to check
 * Return: the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp;
	unsigned int count = 0;

	tmp = n ^ m;

	while (tmp)
	{
		tmp &= (tmp - 1);
		count++;
	}
	return (count);
}
