/**
 * _strstr - Locate a substring
 * @haystack: Initial string
 * @needle: Substring to be searched in haystack
 * Return: Pointer to the beginning of the located str or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
			return (haystack + i);
		i++;
	}

	return (0);
}
