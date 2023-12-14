/**
 * _strlen - calculate the length of the string @str
 * @str: char pointer to string
 * Return: int representing the length of @str
 */
int _strlen(char *str)
{
	int len = 0;

	while (str && str[len])
		len++;

	return (len);
}

/**
 * _strcat - Concatenate 2 strings
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, destlen = 0, srclen = 0;

	destlen = _strlen(dest);
	srclen = _strlen(src);
	while (dest[i] != '\0')
		i++;

	for (; i < destlen + srclen; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
