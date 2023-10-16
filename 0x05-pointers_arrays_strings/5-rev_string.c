#include <string.h>
#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int len, i, j;
	j = len = strlen(s);
	char tmp[len + 1];
	
	for (i = 0; i < len; i++)
	{
		//*(s + i) = tmp[j - 1];
		_putchar(tmp[i]);
	}
}
