#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, driver, print result of multiplication of two numbers
 * @argc: The count of arguments passed to main
 * @argv: The vector of argv, pointer to array of str
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int i, mult = 1;

		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}

		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
