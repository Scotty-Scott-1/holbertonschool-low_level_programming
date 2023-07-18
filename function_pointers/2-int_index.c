#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - search for an value in array > 0
* @array: an array
* @size: size of array
* @cmp: function a evaluates array[i]
* Description: search for number
* Return: index number or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) > 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
