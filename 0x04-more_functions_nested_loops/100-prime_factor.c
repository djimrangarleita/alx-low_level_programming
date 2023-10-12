#include <stdio.h>

/**
 * main - Entry point, print prime factors of n
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
			printf("%d", i);
			n /= i;
			if (n != 1)
			{
				printf(", ");
			}
		}
		else
		{
			i++;
		}
	}
	printf("\n");
	return (0);
}
