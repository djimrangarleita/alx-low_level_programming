#include <stdio.h>

/**
 * main - Entry point, driver, print all arguments received
 * @argc: The count of arguments passed to main
 * @argv: The vector of argv, pointer to array of str
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
