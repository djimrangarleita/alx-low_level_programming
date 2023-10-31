#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - Concatenate all arguments
 * @ac: Argument count
 * @av: Argument value
 * Return: Pointer to a string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, slen = 1;
	char *s;


	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			slen += strlen(av[i]);
	}

	s = malloc((slen + ac) * sizeof(char));

	if (av == NULL || ac == 0 || s == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0' && av[i] != NULL)
		{
			s[k] = av[i][j];
			j++;
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';

	return (s);
}
