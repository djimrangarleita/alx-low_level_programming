#include "main.h"
#include <string.h>

/**
 * puts2 - print all chars of string at even index
 * @str: string
 */
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);

	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
