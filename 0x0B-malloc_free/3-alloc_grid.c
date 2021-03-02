#include <stdlib.h>
#include "holberton.h"

/**
  * alloc_grid - returns a pointer to a 2D array of integers
  * @width: width of the array
  * @height: height of the array
  *
  * Return: pointer to a 2D array
  */
int **alloc_grid(int width, int height)
{
	int **grid, idx, jdx;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (idx = 0; idx < height; idx++)
		grid[idx] = malloc(sizeof(int) * width);

	for (idx = 0; idx < height; idx++)
	{
		for (jdx = 0; jdx < width; jdx++)
			grid[idx][jdx] = 0;
	}
	return (grid);
}
