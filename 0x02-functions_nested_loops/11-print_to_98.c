#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural nums form n to 98;
 * @n: int param
 *
 */
void print_to_98(int n)
{
	if (n > 99)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
		printf("\n");
	}
	else
	{
		while (n < 99)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
		printf("\n");
	}
}
