#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - Split string into words
 * @str: The string to be splitted
 * Return: Pointer to an arrays of strings(words)
 */
char **strtow(char *str)
{
	int i = 0, k = 0, wcount = 0, l, found;
	int *lenar;
	char **newstr;

	if (str == NULL || *str == '\0' || (*str == ' ' && str[i + 1] == '\0'))
		return (NULL);

	while (str[i] != '\0')
	{
		if ((i == 0 && str[i] != ' ') || (i != 0 && str[i] != ' ' &&
					str[i - 1] == ' '))
		{
			wcount++;
		}
		i++;
	}

	lenar = malloc(wcount * sizeof(int));

	if (lenar == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		found = 0;

		if (str[i] != ' ')
		{
			found = 1;
			while (str[i] != ' ' && str[i] != '\0')
			{
				lenar[k] += 1;
				i++;
			}
		}

		if (found)
			k++;

		else
			i++;
	}


	newstr = malloc(wcount * sizeof(char *));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < wcount; i++)
		newstr[i] = malloc((lenar[i] + 1) * sizeof(char));
	/* Handle error */

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		found = 0;
		if (str[i] != ' ')
		{
			found = 1;
			l = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				newstr[k][l] = str[i];
				l++;
				i++;
			}
		}
		if (found)
		{
			newstr[k][l] = '\0';
			k++;
		}
		else
		{
			i++;
		}
	}

	free(lenar);

	return (newstr);
}
