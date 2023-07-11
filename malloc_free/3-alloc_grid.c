#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* alloc_grid - return pointer to 2d array
* @width: an int
* @height: an int
* Description - set values to 0
*
* Return: int
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

	result = malloc(height * sizeof(int *));


	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);
		if (result[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
			free(result[j]);
			}
		free(result);
		return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			result[i][j] = 0;
		}
	}
return (result);

}

