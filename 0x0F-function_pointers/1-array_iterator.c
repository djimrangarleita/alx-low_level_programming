#include <stdio.h>

/**
 * array_iterator - interate over each elt of array
 * @array: array of @size elt
 * @size: size of the array
 * @action: function ptr, the function to execute on each elt
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
