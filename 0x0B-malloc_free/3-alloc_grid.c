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
	for (i = 0; i < height; i++)
	grid[i] = calloc(width, sizeof *(grid[i]));

	if (width == 0 || height == 0 || grid == 0)
	return (0);
	else
	return (grid);

}
