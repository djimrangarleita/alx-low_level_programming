#include <stdio.h>

void print_array(int *, int);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[1] = {
		98
	};

	print_array(array, 0);
	print_array(array, -1);
	return (0);
}
