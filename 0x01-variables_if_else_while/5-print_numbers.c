#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints digit numbers of base 10 starting from 0
 *
 * Return: Always return 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);
	putchar('\n');
	return (0);
}
