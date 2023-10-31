#include <stdlib.h>

/**
 * free_grid - Free the memory allocated via alloc_grid()
 * @grid: Pointer to the array of pointers
 * @height: Size of the pointers, y
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
