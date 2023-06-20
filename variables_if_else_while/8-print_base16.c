#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints all numbers of base 16 starting at 0
*
* Description - A function that prints numbers
*
* Return: 0 success
*/
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
	putchar (i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
	putchar (i);
	}
	putchar ('\n');
	return (0);
}
