#include "main.h"
#include <stdio.h>
/**
* print_binary - convert an int to binary
* @n: a int
* Description: convert a int to binary
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	int i = 63;
	unsigned long int unsigned1 = 1;

	if (n == 0)
	{
	_putchar('0');
	}
	while (i >= 0 && (n & (unsigned1 << i)) == 0)
	{
		i--;
	}
	while (i >= 0)
	{
		if (i >= 0 && (n & (unsigned1 << i)) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		i--;
	}
}


