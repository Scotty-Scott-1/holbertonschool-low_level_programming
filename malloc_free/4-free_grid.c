#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*
* free_grid - free memory used by grid
* @**grid 2d array
* @height: comulns
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
