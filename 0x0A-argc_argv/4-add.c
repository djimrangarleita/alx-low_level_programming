#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, driver, print sum of two numbers
 * @argc: The count of arguments passed to main
 * @argv: The vector of argv, pointer to array of str
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] != '0' && atoi(argv[i]) == 0)
		{
			printf("Error\n");

			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
