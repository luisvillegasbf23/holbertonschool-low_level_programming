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
	int i = 0;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid == NULL)
			return (NULL);
		free(grid);
	}
	return (grid);
}
