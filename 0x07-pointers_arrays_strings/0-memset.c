/**
 * _memset - Fills memory with constant byte
 * @s: Pointer to the memory area
 * @n: Num of bytes to be filled
 * @b: The constant byte
 * Return: Pointer to the mem
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
