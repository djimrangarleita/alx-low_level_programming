#include <stdio.h>

/**
 * main - Entry point, FizzBuzz game
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
			{
				printf(" ");
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
