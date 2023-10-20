#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point, print the number @n using _putchar
 * @n: Int to be printed
 */
void print_number(int n)
{
	int lastdigit;
	int sign = 1;

	if (n < 0)
	{
		_putchar('-');
		lastdigit = n % 10;
		n /= -10;
		sign = -1;
	}

	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');

	if (sign < 0)
		_putchar('0' - lastdigit);

}
