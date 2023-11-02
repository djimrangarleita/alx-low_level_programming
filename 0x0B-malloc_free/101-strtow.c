#include <stdlib.h>
#include <string.h>
int *wcount(char *str);

/**
 * strtow - Split string into words
 * @str: The string to be splitted
 * Return: Pointer to an arrays of strings(words)
 */
char **strtow(char *str)
{
	int i = 0, k = 0, l;
	int *lenar;
	int *mywcount;
	char **newstr;

	if (!str || !*str || *str == '\0')
		return (NULL);


	mywcount = wcount(str);
	lenar = malloc(*mywcount * sizeof(int));

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


	newstr = malloc(*mywcount * sizeof(char *));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < *mywcount; i++)
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
	free(mywcount);

	return (newstr);
}

/**
 * wcount - count the number of words in str
 * @str: Pointer to the used string
 * Return: Int, number of word
 */
int *wcount(char *str)
{
	int mywc = 0, i = 0;
	int *mywcount = malloc(sizeof(int));

	while (str[i] != '\0')
	{
		if ((i == 0 && str[i] != ' ') || (i != 0 && str[i] != ' ' &&
					str[i - 1] == ' '))
		{
			mywc++;
		}
		i++;
	}
	*mywcount = mywc;

	return (mywcount);
}
