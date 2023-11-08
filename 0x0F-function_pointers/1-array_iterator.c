#include <stdio.h>

/**
 * array_iterator - interate over each elt of array
 * @size: size of the array
 * @action: function ptr, the function to execute on each elt
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
