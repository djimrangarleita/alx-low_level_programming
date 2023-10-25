#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Print a string followed by a new line
 * @s: String to print
 */
void _print_rev_recursion(char *s)
{

	if (s[0] == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
