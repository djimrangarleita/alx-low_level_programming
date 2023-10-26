#include <stdio.h>

int search_sqrt(int, int, int);

/**
 * _sqrt_recursion - Driver, return the natural sqrt of a number
 * @n: The number
 * Return: The natural sqrt of n, -1 if n doesn't have natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (search_sqrt(0, n, n));
}

/**
 * search_sqrt - Recursively search the sqrt of n using square factor & bin
 * search
 * @inf: Lower born range
 * @sup: Higher born range
 * @n: The given number
 * Return: sqrt(n) or -1 if n is not a perfect square
 */
int search_sqrt(int inf, int sup, int n)
{
	long int mid;

	if (inf <= sup)
	{
		mid = (inf + sup) / 2;

		if (mid * mid == n)
			return (mid);
		if (mid * mid < n && (mid + 1) * (mid + 1) > n)
		{
			return (-1);
		}

		if (mid * mid < n)
			return (search_sqrt(mid + 1, sup, n));

		return (search_sqrt(inf, mid - 1, n));
	}

	return (inf);
}
