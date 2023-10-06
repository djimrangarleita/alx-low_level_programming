#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the alphabet except q and e in lowercase
 *
 * Return: Always return 0 on success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
