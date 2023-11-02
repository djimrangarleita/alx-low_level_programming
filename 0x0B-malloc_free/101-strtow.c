#include <stdlib.h>
#include <string.h>

/**
 * strtow - Split string into words
 * @str: The string to be splitted
 * Return: Pointer to an arrays of strings(words)
 */
char **strtow(char *str)
{
	int i = 0, k = 0, wcount = 0, l;
	int *lenar;
	char **newstr;

	if (!str || !*str || *str == '\0')
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
		if (str[i] != ' ')
			lenar[k] += 1;

		else if ((i == 0 && str[i] != ' ') || (i != 0 && str[i] != ' ' &&
					str[i - 1] == ' '))
		{
			k++;
		}
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
	l = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			newstr[k][l] = str[i];
			l++;
		}
		if ((i != 0 && str[i] == ' ' && str[i - 1] != ' '))
		{
			newstr[k][l] = '\0';
			k++;
			l = 0;
		}
		i++;
	}

	free(lenar);

	return (newstr);
}
