/**
 * _memset - Fills memory with constant byte
 * @s: Pointer to the memory area
 * @n: Num of bytes to be filled
 * @b: The constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}

	return (s);
}
