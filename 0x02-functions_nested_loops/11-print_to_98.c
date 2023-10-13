#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural nums form n to 98;
 * @n: int param
 *
 */
void print_to_98(int n)
{
	int inc = 1;
	/* int tmp; */

	if (n > 98)
		inc = -1;
	do {
		printf("%d, ", n);
		/*
		if (n < 0)
		{
			_putchar('-');
			tmp = abs(n);
		}
		else
		{
			tmp = n;
		}
		if (tmp < 10)
		{
			_putchar(tmp + '0');
		}
		else
		{
			_putchar(tmp / 10 + '0');
			_putchar(tmp % 10 + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		*/
		n += inc;
		printf("\n");
	} while (n < 99);
	_putchar('\n');
	_putchar('\n');
}
