#include "main.h"

/**
 * _isupper - Test if a given char is uppercase letter
 * @c: Int char to test
 * Return: Int val, 1 if char is upper, 0 if not
 */
int _isupper(int c)
{
	if (!isupper(c))
	{
		return (0);
	}
	return (1);
}
