#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @a: a number
* Description - a function
*
* Return: int
*/
int print_last_digit(int a)
{ 
	if (a >= 10)
	{
	a = a % 10;
	_putchar (a);
	_putchar (a);
	}
	else if (a <= -10) 
	{
	a = a % 10;
	_putchar(a);
	_putchar(a);
	}
	else
	{
	_putchar(a);
	_putchar(a);
	}

	return (0);

}
