#include "main.h"
/**
* print_square - print a square
* @size: an int
* Description - a function
*
* Return: void
*
*/
void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
	for (y = 1; y <= size; y++)
	{
	if (size > 0)
	{
	_putchar('#');
	}
	}
	_putchar('\n');
	}
}
