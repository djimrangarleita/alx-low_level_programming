/**
 * wildcmp - Compare 2 strings
 * @s1: First string
 * @s2: Second string
 * Return: 1 if s1 and s2 are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if(s1[0] == '\0' && s2[0] == '\0')
		return (1);

	if (s1[0] != s2[0])
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}
