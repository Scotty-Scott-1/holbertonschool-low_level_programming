#include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* Description - Prints the alphabet x10 in lowercase followed by a new line
*
* Return: void success
*/
void print_alphabet_x10(void)
{
	int i;
	int ii = 0;

	for (ii = 0; ii <= 10; ii++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	}
	_putchar('\n');
}
