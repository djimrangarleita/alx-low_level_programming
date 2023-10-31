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
	int i, j, size_s1, size_s2;
	char *s;

	if (s1 == NULL)
		size_s1 = 0;
	else
		size_s1 = strlen(s1);

	if (s2 == NULL)
		size_s2 = 0;
	else
		size_s2 = strlen(s2);

	s = malloc((size_s1 + size_s2 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0, j = 0;
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
