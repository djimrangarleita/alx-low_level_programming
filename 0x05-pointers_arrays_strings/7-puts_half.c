#include "main.h"
#include <string.h>

/**
 * puts_half - Print second half of a string
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = strlen(str);
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len / 2) + 1;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
