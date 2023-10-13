#include <stdio.h>

/**
 * main - Entry point, computes the multiples of 3 & 5 bellow @n
 * Return: 0 on success
 */
int main(void)
{
	int sum;
	int i;
	int n;

	n = 1024;
	sum = 0;
	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
