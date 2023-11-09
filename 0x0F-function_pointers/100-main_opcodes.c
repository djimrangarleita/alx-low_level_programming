#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, driver
 * @argc: number of args
 * @argv: array of args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, pbyte;
	int (*main_ptr)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	pbyte = atoi(argv[1]);
	if (pbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < pbyte)
	{
		printf("%.2x", *(unsigned char *)main_ptr);
		i++;
		if (i < pbyte)
			printf(" ");
		main_ptr++;
	}
	printf("\n");

	return (0);
}
