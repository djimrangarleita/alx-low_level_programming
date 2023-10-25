/**
 * _pow_recursion - Raise x to power y and return val
 * @x: Base num
 * @y: Power of x
 * Return: x^y or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
