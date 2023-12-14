/**
 * _strcpy - Copy string src to string dest
 * @dest: Where to copy src
 * @src: The string to paste to dest
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
