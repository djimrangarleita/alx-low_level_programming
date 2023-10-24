/**
 * _strpbrk - Check if any char in s match any char in accept
 * @s: Initial string
 * @accept: Accepted to search
 * Return: Pointer to the first occurence of match
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}

	return (0);
}
