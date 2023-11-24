#include "main.h"
#include <stdio.h>

/**
 * print_binary - convert num to binary and print it
 * @n: int, the decimal num to be converted to bin
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
