#include <stdio.h>

/**
 * _strspn - Get the length of a prefix substring
 * @s: Initial string
 * @accept: Prefix substring, accepted
 * Return: Number of bytes in the initial segment s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int len = 0;

	while (s[i] != '\0')
	{
		int j = 0;
		int foundChar = 0;

		while (s[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				/* printf("Found %c\n", accept[j]); */
				foundChar = 1;
				len++;
				break;
			}
			j++;
		}
		if (foundChar == 0)
			break;
		i++;
	}

	return (len);
}
