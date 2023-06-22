#include "main.h"
/**
* times_table - print the x9 table with , and space
*
* Description - a function
*
* Return: void
*/
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	c = a * b;
	if (c < 10)
	{
	_putchar('0' + c);
	}
	else
	{
	_putchar('0' + c / 10);
	_putchar('0' + c % 10);
	}
	if (b < 9 && c < 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else if (b < 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');

	}
}
