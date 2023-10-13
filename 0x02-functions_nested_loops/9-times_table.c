#include "main.h"

/**
 * jack_bauer - Print every minute of jack bauer
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		int val = 0;
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		for (j = 0; j < 9; j++)
		{
			val += i;
			if (val > 9)
				_putchar(val / 10 + '0');
			_putchar(val % 10 + '0');
			if (j < 8)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
