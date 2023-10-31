#include <stdlib.h>

/**
 * alloc_grid - Create a 2D array of ints
 * @width: Width of the array, x axis
 * @height: Height of the array, y axis
 * Return: Pointer to the created array or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid = malloc(height * sizeof(int *));

	if (width == 0 || height == 0 || grid == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(sizeof(int) * width);

		if (grid[k] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
