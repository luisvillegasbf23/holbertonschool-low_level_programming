#include "main.h"
/**
 * **alloc_grid - Write a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, size;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	size = width * height;
	grid = malloc(size * sizeof(int));

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				grid[i][j] =0;
		}
	}

	return (grid);
}
