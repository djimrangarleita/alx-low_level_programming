/**
 * leet - Leet encode 1337
 * @s: String to be encoded
 * Return: Pointer to string
 */
char *leet(char *s)
{
	int i = 0, j;
	char comparator[10] = "AaEeOoTtLl";
	char equiv[10] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (comparator[j] == s[i])
				s[i] = equiv[j];
		}
		i++;
	}

	return (s);
}
