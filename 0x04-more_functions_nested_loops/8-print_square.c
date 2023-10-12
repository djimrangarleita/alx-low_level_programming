#include "main.h"

/**
 * print_square - Prints a square of size @size
 *@size: Size of the square to be printed
 */
void print_square(int size)
{
	int i;
	int j;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (i = 1; i < size + 1; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
