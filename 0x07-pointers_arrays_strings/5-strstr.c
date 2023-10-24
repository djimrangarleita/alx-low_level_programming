#include <string.h>
#include <stdio.h>

/**
 * _strstr - Locate a substring
 * @haystack: Initial string
 * @needle: Substring to be searched in haystack
 * Return: Pointer to the beginning of the located str or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int slen = strlen(needle);

	while (haystack[i] != '\0')
	{
		int start = 0;

		if (haystack[i] == needle[0])
		{
			int k = 1;
			int j = slen + i;
			int l = i + 1;

			printf("Slen: %d...\nl: %d...\nj: %d...\n", slen, l, j);
			start = i;

			while (l < j && haystack[l] != '\0')
			{
				if (haystack[l] != needle[k])
					break;
				if (k == slen - 1)
					return (haystack + start);
				l++;
				k++;
			}
			printf("k: %d et l: %d\n", k, l);
		}

		i++;
	}

	return (0);
}
