#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* array_range - create array with ints from min to max
* @min: an int
* @max: an int
* Description - a function
* Return: int
*
**/

int *array_range(int min, int max)
{

	int i = 0;
	int *ptr;
	int range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	ptr = malloc(range * 4);
	if (ptr == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;


	}
	return (ptr);
}
