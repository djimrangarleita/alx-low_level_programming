#include <stdio.h>

/**
 * main - Entry point, driver, print number of arguments
 * @argc: The count of arguments passed to main
 * @argv: The vector of argv, pointer to array of str
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc);

	return (0);
}
