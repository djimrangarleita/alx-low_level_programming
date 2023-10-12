#include "main.h"

/**
 * _isalpha - Print alphabets from a to z followed by a new line
 * @c: int param, the char to be tested
 * Return: 1 if c is alpha, 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	return (1);
}
