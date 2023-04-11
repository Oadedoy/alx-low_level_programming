#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  free memory of a 2d array grid
 *
 * @grid: double pointer 2d grid
 * @height: height of grid
 *
 * Return: nothing
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
