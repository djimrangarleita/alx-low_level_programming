/**
 * _isdigit - Test if a given char is a digit number
 * @c: Int char to test
 * Return: Int val, 1 if char is digit, 0 if not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
