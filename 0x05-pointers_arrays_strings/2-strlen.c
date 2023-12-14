/**
 * _strlen - calculate the length of the string @str
 * @str: char pointer to string
 * Return: int representing the length of @str
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && s[len])
		len++;

	return (len);
}
