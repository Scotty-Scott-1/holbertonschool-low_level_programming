#include "main.h"
/**
* print_triangle - print a triangle
* @size: an int
* Description - a function
*
* Return: void
*
*/
void print_triangle(int size)
{
	int h;
	int w;

	if (size < 0)
	{
	_putchar('\n');
	}
	for (h = 1; h <= size; h++)
	{
	for (w = 1; w <= size - h; w++)
	{
	_putchar(' ');
	}
	for (w = 1; w <= h; w++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
