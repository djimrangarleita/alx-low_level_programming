#include "main.h"

/**
 * print_diagonal - Prints int numbers from 0 to 9
 *@n: Number of lines to be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 1)
	{
		_putchar('\n');
	}
	for (i = 1; i < n + 1; i++)
	{
		for (j = 0; j < i - 1; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
