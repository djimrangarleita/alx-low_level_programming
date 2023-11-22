#include <stdio.h>

/**
 * main - Driver, print sum of even terms whose value doesn't exceed 4000000
 * Return: 0 on success
 */
int main(void)
{
	long int n1 = 0, n2 = 1, fib, max = 4000000, sum = 0;

	for (fib = 0; fib <= max;)
	{
		fib = n1 + n2;
		n1 = n2;
		n2 = fib;
		if (!(fib % 2))
			sum += fib;
	}
	printf("%ld\n", sum);

	return (0);
}
