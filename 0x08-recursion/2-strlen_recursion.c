/**
 * _strlen_recursion - Compute the length of a string recursively
 * @s: String
 * Return: Length of s
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
