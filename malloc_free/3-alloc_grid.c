#include "main.h"
#include <stdlib.h>
/**
*
* alloc_grid returns a pointer to a 2 dimension
Prototype: int **alloc_grid(int width, int height);
Each element of the grid should be initialized to 0
The function should return NULL on failure
If width or height is 0 or negative, return NULL
*
*
*
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **result;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		result = malloc(height * 4);
		result[i] = 0;
		for (j = 0; j < width; j++) 
		{
			result = malloc(width * 4);
			result[i][j] = 0;
		}
	}

	return (result);

}

