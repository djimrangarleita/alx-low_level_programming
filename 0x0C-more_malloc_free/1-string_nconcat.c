#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *_strncat(char *s1, char *s2, int max_i);

/**
 * string_nconcat - concatenate the first n char of @s1 and @s2
 * @s1: the first string
 * @s2: the second string
 * @n: the specific size of s2 to be copied
 * Return: pointer to the
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1len, s2len, max_i;
	char *scat;

	s1len = s2len = 0;
	if (s1 && *s1)
		s1len = strlen(s1);
	if (s2 && *s2)
		s2len = strlen(s2);

	printf("s1: %d and s2: %d\n", s1len, s2len);
	if (s2len < (int)n)
		max_i = s1len + s2len;
	else
		max_i = s1len + n;

	scat = _strncat(s1, s2, max_i);
	if (!scat || !*scat)
		return (NULL);

	return (scat);
}

/**
 * _strncat - concatenate 2 strings using n char
 * @s1: the first string
 * @s2: the second string
 * @max_i: the max size of the new string
 * Return: pointer to a new  created from s1 + s2
 */
char *_strncat(char *s1, char *s2, int max_i)
{
	int i, j;
	char *scat;

	printf("max i is %d\n", max_i);
	scat = malloc((max_i + 1) * sizeof(*scat));
	if (!scat)
		return (NULL);

	printf("Passed if and max i is %d\n", max_i);
	i = 0;
	while (max_i > 0 && s1[i] != '\0')
	{
		scat[i] = s1[i];
		i++;
	}
	printf("Passed first while and max i is %d\n", max_i);
	j = 0;
	while (i < max_i)
	{
		scat[i] = s2[j];
		i++;
		j++;
	}

	printf("Passed second while and max i is %d and i: %i\n", max_i, i);
	scat[i] = '\0';

	return (scat);
}
