#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @a: a number
*
* Description - a function
*
* Return: int
*/
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
	b = -b;
	}
	_putchar('0' + b);
	return (b);
}
