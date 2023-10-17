#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * _atoi - Convert a string to an int
 * @s: The string to be converted
 * Return: Int val of the converted string
 */
int _atoi(char *s)
{
	int i;
	int count_neg;
	int len;
	int num;


	count_neg = 0;
	len = strlen(s);
	num = 0;
	i = 0;
	while (i < len)
	{
		if (isdigit(s[i]) == 0)
		{
			if (s[i] == '-')
				count_neg++;
			i++;
		}
		else
		{
			break;
		}
	}

	for (; i < len; ++i)
	{
		if (isdigit(s[i]) == 0)
			break;
		num = num * 10 + s[i] - '0';
	}

	if (count_neg % 2 != 0)
		num *= -1;

	return (num);
}
