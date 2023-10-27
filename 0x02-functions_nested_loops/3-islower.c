/**
 * _islower - Print alphabets from a to z followed by a new line
 * @c: int param, the char to be tested
 * Return: 1 if char is lower, 0 if not
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	return (0);
}
