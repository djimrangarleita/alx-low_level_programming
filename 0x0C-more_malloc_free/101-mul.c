#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

void _printstr(char *str);
void print_number(int n);

/**
 * main - Entry point, driver, print sum of two numbers
 * @argc: The count of arguments passed to main
 * @argv: The vector of argv, pointer to array of str
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	long int mul = 1;

	if (argc != 3)
	{
		_printstr("Error");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				_printstr("Error");

				exit(98);
			}
			j++;
		}
		mul *= atoi(argv[i]);
	}

	print_number(mul);
	_putchar('\n');

	return (0);
}

/**
 * _printstr - print a string using putchar
 * @str - the string to be printed
 */
void _printstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * print_number - Entry point, print the number @n using _putchar
 * @n: Int to be printed
 */
void print_number(int n)
{
	int lastdigit;
	int sign = 1;

	if (n < 0)
	{
		_putchar('-');
		lastdigit = n % 10;
		n /= -10;
		sign = -1;
	}

	if (n / 10)
		print_number(n / 10);

	if (n != 0 || sign > 0)
		_putchar(n % 10 + '0');

	if (sign < 0)
		_putchar('0' - lastdigit);

}
