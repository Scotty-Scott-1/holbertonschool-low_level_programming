#include "search_algos.h"
/**
* linear_search - search for a value in an array using
* linear search algorithm
* @array: an array
* @size: size of the array
* @value: target values to search for
* Return: target value or -1 on failure
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

if (array == NULL)
return (-1);

while (i <= size - 1)
{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (value == array[i])
	{
		return ((int)i);
	}
	i++;
}
	return (-1);
}
