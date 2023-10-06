#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function print the alphabet in lowercase then in uppercase
 *
 * Return: Always return 0 on success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
