#include "main.h"

void printnum(unsigned int n);
void printspace(int n);
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
					printspace(1);
				}
				else if (val > 9)
				{
					printspace(2);
				}
				else
				{
					printspace(3);
				}
				printnum(val);
				if (j < n - 1)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * printnum - print unsigned nums
 * @n: the num to be printed
 */
void printnum(unsigned int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		printnum(n / 10);
		printnum(n % 10);
	}
}

/**
 * printspace - print ' ' char to separate ints
 * @n: number of space to write
 */
void printspace(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}
