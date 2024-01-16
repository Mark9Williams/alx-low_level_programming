#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - frees a two dimensional grid
  * @grid: pointer to a 2 dimensional array
  * @height: stores number of rows
  * Return: returns nothing
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
