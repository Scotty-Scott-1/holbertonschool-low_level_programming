#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_grid - return pointer to 2d array
* @grid: a 2d array
* @height: an int
* Description - a function
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
		free(grid);
}
