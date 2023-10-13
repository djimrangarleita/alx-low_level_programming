#include "main.h"

/**
 * times_table - Print times table
 *
 */
void times_table(void)
{
	int i;
	int j;
	int val;

	for (i = 0; i < 10; i++)
	{
		val = 0;
		_putchar(0 + '0');
		_putchar(',');
		for (j = 0; j < 9; j++)
		{
			val += i;
			if (val > 9)
			{
				_putchar(' ');
				_putchar(val / 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(val % 10 + '0');
			if (j < 8)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
