#include <stdio.h>

/**
 * main - Driver, print 50 first fibo terms
 * Return: 0 on success
 */
int main(void)
{
	int i;
	long int n1 = 0, n2 = 1, fib = 0;

	for (i = 0; i < 98; i++)
	{
		fib = n1 + n2;
		printf("%ld", fib);
		n1 = n2;
		n2 = fib;
		if (i < 97)
			printf(", ");
	}
	printf("\n");

	return (0);
}
