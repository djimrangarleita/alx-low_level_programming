#include "main.h"

/**
 * print_line - Prints int numbers from 0 to 9
 *@n: Number of underscores to be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while(i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
