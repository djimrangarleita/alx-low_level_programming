#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - print list of num @.. with @separator if not null
 * @separator: char ptr, used to separate the nums
 * @n: number of ints in the @...
 * @...: variable list of int args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		i++;
		if (i < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
