int is_prime(int, int);

/**
 * is_prime_number - Driver, check if n is a prime number
 * @n: The number to be checked
 * Return: 1 if n is prime, 0 otherwise;
 */
int is_prime_number(int n)
{
	int flag;

	flag = is_prime(n, 2);

	if (flag)
		return (1);
	return (0);
}

/**
 * is_prime - Check recursively if the num n is prime
 * @i: Recursion count
 * @n: The given num
 * Return: 1 if n is prime, 0 if not
 */
int is_prime(int n, int i)
{
	if (n < 0)
		n *= -1;
	if (n < 2)
		return (0);
	if (i == n / 2)
		return (1);
	if (n % i != 0)
		return (is_prime(n, i + 1));
	return (0);
}
