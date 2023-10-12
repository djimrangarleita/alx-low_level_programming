#include <stdio.h>

/**
 * main - Entry point, print the largest prime factor of @n
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 2;
	long int n;

	n = 612852475143;
	while (n > 1)
	{
		if (n % i == 0)
		{
			n /= i;
			if (n == 1)
			{
				printf("%d\n", i);
			}
		}
		else
		{
			i++;
		}
	}
	return (0);
}
