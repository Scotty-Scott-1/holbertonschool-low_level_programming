#include "main.h"
/**
* more_numbers - print 0 to 14 new line 10 times
*
* Description: a function
*
* Return: void
*/
void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b <= 9; b++)
	{
	for (a = 0; a <= 14; a++)
	{
	if (a >= 10)
	{
	_putchar('0' + a / 10);
	}
	_putchar('0' + a % 10);
	}
	_putchar('\n');
	}
}
