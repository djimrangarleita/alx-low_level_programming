#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create an array of ints ranging from @min to @max
 * @min: the smallest element in the array
 * @max: the max elt in the array
 * Return: pointer to an array of ints
 */
int *array_range(int min, int max)
{
	int i, j;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (NULL);

	j = 0;
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}

	return (array);
}
