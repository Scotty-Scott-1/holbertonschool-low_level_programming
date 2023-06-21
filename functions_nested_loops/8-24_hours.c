# include "main.h"
/**
* jack_bauer - prints all the hours / minutes in the day
*
* Description - a function
*
* Return: void
*/
void jack_bauer(void);
{
	int a;
	int b; 
	
	for (a = 0; a <= 24; a++)
	{ 
	if (a <= 9)
	{
	_putchar(0);
	_putchar(a);
	_putchar(':');
	}
	else if (a >= 10)
	{
	_putchar (a);
	_putchar (':');
	}

	for (b = 0; b <= 59; b++)
	{
	_putchar(b);
	_putchar (':');
	}
	

	
	}
}
