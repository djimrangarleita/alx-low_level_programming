#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints hex numbers starting from 0
 *
 * Return: Always return 0 on success
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
