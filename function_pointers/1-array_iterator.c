#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
* array_iterator - execute action with each element of array as args
* @array: an array
* @size: size of the array
* @action: a function
* Description: a function that executes another func
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (*action == NULL)
	return;
	if (array == NULL)
	return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
