/**
 * string_toupper - COnvert a string to uppercase
 * @s: String to transform
 * Return: Pointer to string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = ('A' + (s[i] - 'a'));
		i++;
	}

	return (s);
}
