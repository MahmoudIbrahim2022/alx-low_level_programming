#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 *
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	grid =  calloc(height, sizeof(int));

	if (width <= 0 || height <= 0 || grid == 0)
	{
		free(grid);
		return (0);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = calloc(width, sizeof(int));
			if (grid[i] == 0)
			{
				while (i--)
				free(grid[i]);
				free(grid);
				return (0);
			}
		}
	}
	return (grid);
}
