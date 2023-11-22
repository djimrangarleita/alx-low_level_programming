#include <stdio.h>

/**
 * main - Driver, print 50 first fibo terms
 * Return: 0 on success
 */
int main(void)
{
	int i, n1 = 0, n2 = 1;
	unsigned int fib = 0;

	for (i = 0; i < 50; i++)
	{
		fib = n1 + n2;
		printf("%u", fib);
		n1 = n2;
		n2 = fib;
		if (i < 49)
			printf(", ");
	}
	printf("\n");

	return (0);
}
