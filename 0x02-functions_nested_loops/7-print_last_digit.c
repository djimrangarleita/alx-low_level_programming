#include "main.h"

/**
 * print_last_digit - Print the last digit of a given number without its sign
 * @d: int param, the int to be computed
 * Return: The absolute value
 */
int print_last_digit(int d)
{
	int pos_last_digit;

	pos_last_digit = abs(d % 10);
	_putchar(pos_last_digit + '0');
	return (pos_last_digit);
}
