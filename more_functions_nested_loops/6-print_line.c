#include "main.h"
/**
* print_line - print a line
* @n: an int
* Description - Where n is the number of times
*
*
* Return: void
*
*
*/
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
