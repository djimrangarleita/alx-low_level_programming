#include "main.h"
#include <stdlib.h>

/**
 * print_number - Entry point, print the number @n using _putchar
 * @n: Int to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = abs(n);
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}