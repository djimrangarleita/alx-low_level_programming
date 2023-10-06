#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function generates a random number and prints the last digit of that
 * number
 *
 * Return: Always return 0 on success
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n, i);
	}
	else
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
