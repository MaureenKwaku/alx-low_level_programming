#include "main.h"
/**
 * free_grid - free 2 dimensional array on integers
 * @grid: parameter to be checked
 * @height: parameter to be checked
 * Return: 1 or 0
 * **/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
