#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings
 * @s1: The first string
 * @s2: The second string to be appended to s1
 * Return: Pointer to a newly allocated space or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int size_s1 = strlen(s1);
	int size_s2 = strlen(s2);

	char *s = malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (i < size_s1)
	{
		s[i] = s1[i];
		i++;
	}

	while (j < size_s2)
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';

	return (s);
}
