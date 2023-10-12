#include "main.h"

/**
 * print_triangle - Prints triangle of size @size
 * @size: Size of the triangle to be printed
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (i = 1; i < size + 1; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < size - j; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
