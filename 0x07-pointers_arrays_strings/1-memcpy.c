/**
 * _memcpy - Copy memory location from src to dest
 * @dest: Pointer to destination
 * @src: Source to be copied to be copied
 * @n: Number of bytes to be copied
 * Return: Pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
