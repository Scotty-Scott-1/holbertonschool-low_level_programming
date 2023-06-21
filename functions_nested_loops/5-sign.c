#include "main.h"
#include <ctype.h>
/**
* print_sign - A function that returns +, 0 or -
*
* @c: A variable
* Descrption - a function
*
* Return: int
*/
int print_sign(int n)
{
	if (n >= 1)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar(0);
	return (0);
	}
	else
	_putchar('-');
	return (-1);

}
