/**
 * _isupper - Test if a given char is uppercase letter
 * @c: Int char to test
 * Return: Int val, 1 if char is upper, 0 if not
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	return (0);
}
