#include <string.h>

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

			start = i;
			if (slen == 1)
				return (haystack + start);

			while (l < j && haystack[l] != '\0')
			{
				if (haystack[l] != needle[k])
					break;
				if (k == slen - 1)
					return (haystack + start);
				l++;
				k++;
			}
		}

		i++;
	}

	return (0);
}
