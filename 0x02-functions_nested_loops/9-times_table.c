#include "main.h"

/**
 * jack_bauer - Print every minute of jack bauer
 *
 */
void times_table(void)
{
	int i;
	int j;
	int val;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			val = i + j;
			_putchar(val / 10 + '0');
			_putchar(val % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
