# include "main.h"
/**
* jack_bauer - prints all the hours / minutes in the day
*
* Description - a function
*
* Return: void
*/
void jack_bauer(void) 
{

	int a;
	int b; 
	
	for (a = 0; a <= 23; a++)
	{
	for (b = 0; b <=59; b++)
	{
	_putchar('0' + a / 10);
	_putchar('0' + a % 10);
	_putchar(':');
	_putchar('0' + b / 10);
	_putchar('0' + b % 10);
	_putchar('\n');

	}



	}
}
