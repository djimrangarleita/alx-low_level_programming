#include <stdarg.h>

/**
 * sum_them_all - sum all the nums passed as param
 * @n: first param, number of elt of @...
 * @...: va_list, list of all the args
 * Return: int, sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	va_start(ap, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);

	return (sum);
}
