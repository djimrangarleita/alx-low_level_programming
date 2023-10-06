#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the smallest combination of digit numbers of base 10
 * starting from 01
 *
 * Return: Always return 0 on success
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1 + i; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
