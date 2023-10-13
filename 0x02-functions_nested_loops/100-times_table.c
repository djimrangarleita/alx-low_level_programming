#include "main.h"

/**
 * print_times_table - Print times table
 * @n: Table to print
 *
 */
void print_times_table(int n)
{
	int i;
	int j;
	int val;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			val = 0;
			_putchar(0 + '0');
			_putchar(',');
			for (j = 0; j < n; j++)
			{
				val += i;
				if (val > 99)
				{
					_putchar(' ');
					_putchar(val / 10 + '0');
				}
				if (val > 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(val / 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(val % 10 + '0');
				if (j < n - 1)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
