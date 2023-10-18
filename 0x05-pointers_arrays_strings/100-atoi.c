#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Convert a string to an int
 * @s: The string to be converted
 * Return: Int val of the converted string
 */
int _atoi(char *s)
{
	int i, count_neg, len, num, base, sign;

	i = num = base = count_neg = 0;
	sign = 1;
	len = strlen(s);
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

	if (count_neg % 2 != 0)
		sign = -1;

	for (; i < len; ++i)
	{
		if (isdigit(s[i]) == 0)
			break;
		if (base > INT_MAX / 10 || (base == INT_MAX / 10 && s[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		base = 10 * base + (s[i] - '0');
	}

	return (sign * base);
}
