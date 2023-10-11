#include "main.h"

/**
 * main - Entry point
 *
 * This function uses _putchar to print "_putchar"
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	int i;
	char *s = "_putchar\n";

	for (i = 0; i < strlen(s); i++)
	{
		_putchar(s[i]);
	}

	return (0);
}
