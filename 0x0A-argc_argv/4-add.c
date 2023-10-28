#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
