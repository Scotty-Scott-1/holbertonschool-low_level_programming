#include "search_algos.h"
void print_arr(int *array, int low, int high);
/**
* binary_search - search for a value in a sorted array using
* binary seach algorithm
* @array: a sorted array
* @size: size of array
* @value: target value
* Return: target value or -1 on failure
*/

int binary_search(int *array, size_t size, int value)
{
	int high = size - 1;
	int low = 0;
	int middle;
	int key;

while (low <= high)
{
	print_arr(array, low, high);

	middle = low + (high - low) / 2;
	key = array[middle];

	if (key < value)
	low = middle + 1;
	else if (key > value)
	high = middle - 1;
	else
	return (key);
}
	return (-1);
}
/**
* print_arr - print the array + some text
*
* @array: a sorted array
* @low: first place in the array to be searched
* @high: last place in the array to be searched
* Return: void
*/
void print_arr(int *array, int low, int high)
{
	int i = low;

	printf("Searching in array: ");
	while (i <= high)
	{

		if (i == high)
		printf("%d\n", array[i]);
		else
		printf("%d, ", array[i]);
		i++;
	}
}
