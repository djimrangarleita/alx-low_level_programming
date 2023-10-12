#include "main.h"

/**
 * print_sign - Print alphabets from a to z followed by a new line
 * @n: int param, the num to be tested
 * Return: Returns 1 and prints + if n is greater than zero,
 *	Returns 0 and prints 0 if n is zero,
 *	Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('+');
	return (1);
}
