#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: String to print
 */
void _puts_recursion(char *s)
{
	if (*(s + 0) == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*(s + 0));
	_puts_recursion(s + 1);
}
