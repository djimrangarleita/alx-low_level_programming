#include "main.h"
#include <stdio.h>

/**
 * print_binary - convert num to binary and print it
 * @n: int, the decimal num to be converted to bin
 */
void print_binary(unsigned long int n)
{
	int i;
	int printit = 0;
	int bin;

	for (i = 31; i >= 0; i--)
	{
		bin = (n >> i) & 1;
		if (bin)
			printit = 1;
		if (printit || i == 0)
			_putchar(bin + '0');
	}
}
