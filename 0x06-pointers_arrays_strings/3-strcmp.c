#include <string.h>

/**
 * _strcmp - Copy string src to string dest
 * @s1: Left side string
 * @s2: Right side string
 * Return: Left - Right
 */
int _strcmp(char *s1, char *s2)
{
	int i, s1len = 0;

	s1len = strlen(s1);
	for (i = 0; i <= s1len; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
