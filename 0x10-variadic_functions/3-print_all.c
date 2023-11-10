#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * _print_char - print a single char
 * @ap: arg ptr, the next arg to be printed
 */
void _print_char(va_list ap)
{
	const char c = va_arg(ap, int);

	printf("%c", c);
}

/**
 * _print_dec - print decimal num
 * @ap: arg ptr, the next arg to be printed
 */
void _print_dec(va_list ap)
{
	const int n = va_arg(ap, int);

	printf("%d", n);
}

/**
 * _print_float - print floating point num
 * @ap: arg ptr, the next arg to be printed
 */
void _print_float(va_list ap)
{
	const float n = va_arg(ap, double);

	printf("%f", n);
}

/**
 * _print_str - print strings
 * @ap: argument ptr, the next arg to be printed
 */
void _print_str(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - print all type of data
 * @format: data format specifier
 * @...: list of data to be printed
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list ap;
	char *separator;
	print_t print_func[] = {
		{"c", _print_char},
		{"i", _print_dec},
		{"f", _print_float},
		{"s", _print_str},
		{NULL, NULL}
	};

	i = 0;
	separator = "";
	va_start(ap, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (print_func[j].format != NULL)
		{
			if (format[i] == *(print_func[j].format))
			{
				printf("%s", separator);
				print_func[j].func(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
