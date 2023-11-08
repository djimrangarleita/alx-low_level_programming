#include <stdlib.h>

/**
 * int_index - search for an int
 * @array: array of int elt where to seach
 * @size: size of the array
 * @cmp: func ptr, function that make the comparison
 * Return: index of the first match occurence
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
