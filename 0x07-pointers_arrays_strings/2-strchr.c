/**
 * _strchr - Locate a char in a string
 * @s: String to search from
 * @c: Char to locate
 * Return: Pointer to first occurence of c in s, or null if c not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	if (s[i] == '\0' && c == '\0')
		return (s + i);

	return (0);
}
