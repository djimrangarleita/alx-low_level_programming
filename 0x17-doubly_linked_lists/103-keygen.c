#include <stdio.h>

/**
 * key_gen - generate a password for username
 * @argc: number of args
 * @argv: ptr to ptr of val
 * Return: 1 on successs
 */
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%s", argv[1]);
	return (0);
}
