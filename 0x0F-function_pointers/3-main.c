#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point, driver program
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
