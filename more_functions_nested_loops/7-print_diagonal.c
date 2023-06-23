#include "main.h"
/**
* print_diagonal - print a line
* @n: an int
* Description - a function
*
* Return: void
*
*/

void print_diagonal(int n)
{
	int dw;
	int ac;

	for (ac = 0; ac < n; ac++)
	{
	for (dw = 0; dw < ac; dw++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}

