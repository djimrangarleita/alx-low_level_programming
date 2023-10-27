/**
 * _isalpha - Print alphabets from a to z followed by a new line
 * @c: int param, the char to be tested
 * Return: 1 if c is alpha, 0 if not
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	return (0);
}
