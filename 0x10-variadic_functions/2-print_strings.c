#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - print list of str @... with @separator if not null
 * @separator: char ptr, used to separate the strings
 * @n: number of strings in the @...
 * @...: variable list of int args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(ap, char *);
		printf("%s", str ? str : "(nil)");
		i++;
		if (i < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
