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
	FILE *fptr;
	int i, pbyte;
	char c;

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

	fptr = fopen(__FILE__, "r");

	if (fptr)
	{
		i = 0;
		while ((c = getc(fptr)) != EOF && i < pbyte)
		{
			printf("%x", c);
			i++;
			if (i < pbyte)
				printf(" ");
		}
		printf("\n");
		fclose(fptr);
	}

	return (0);
}
