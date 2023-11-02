#include <stdlib.h>
#include <string.h>

int *wcount(char *str);
int *_strlen_mix(char *str, int count);
char **split_to_w(char *str, int *lenar, int count);

/**
 * strtow - Split string into words
 * @str: The string to be splitted
 * Return: Pointer to an arrays of strings(words)
 */
char **strtow(char *str)
{
	int *lenar, *mywcount;
	char **newstr;

	if (!str || !*str || *str == '\0' || (strlen(str) == 1 && *str == ' '))
		return (NULL);

	mywcount = wcount(str);
	lenar = _strlen_mix(str, *mywcount);
	if (lenar == NULL)
		return (NULL);

	newstr = split_to_w(str, lenar, *mywcount);

	if (newstr == NULL)
	{
		free(lenar);
		return (NULL);
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

/**
 * _strlen_mix - length of each word in the string
 * @str: The string
 * @count: Number of words in str
 * Return: Pointer to an array contains lengths
 */
int *_strlen_mix(char *str, int count)
{
	int i = 0, k = 0;
	int *lenar;

	lenar = malloc(count * sizeof(int));

	if (lenar == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if ((i == 0 && str[i] != ' ') || (i != 0 && str[i] != ' ' &&
					str[i - 1] == ' '))
		{
			lenar[k] = strlen(&str[i]);
			k++;
		}
		i++;
	}

	return (lenar);
}

/**
 * split_to_w - This function split str to an array of words
 * @str: The string
 * @lenar: Array that contains length of each word in the str
 * @count: Number of words in str
 * Return: Pointer to the array of words or NULL
 */
char **split_to_w(char *str, int *lenar, int count)
{
	int i = 0, l = 0, k = 0, j;
	char **newstr;

	newstr = malloc(count * sizeof(char *));

	if (newstr == NULL)
		return (NULL);

	for (j = 0; j < count; j++)
		newstr[j] = malloc((lenar[j] + 1) * sizeof(char));
	/* Handle error */

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

	return (newstr);
}
