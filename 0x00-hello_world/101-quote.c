#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Print a message on standard error
 *
 * Return: return 0 on success
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59, 1, stderr);
	return (1);
}
