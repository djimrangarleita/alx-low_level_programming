#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints all possible combinations of 2 2-digit
 *
 * Return: Always return 0 on success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			putchar(' ');
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
