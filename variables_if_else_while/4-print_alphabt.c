#include <stdio.h>
/**
* main - Entry point for the function
*
* Description - Prints all letters of the alphabet execpt q and e
*
* Return: 0 success
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
	if (a != 'e' && a != 'q')
	{
	putchar(a);
	}
	a++;
	}
	return (0);
}
