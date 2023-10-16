#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse order
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
