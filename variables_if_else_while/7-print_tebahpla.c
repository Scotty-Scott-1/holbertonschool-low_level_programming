#include <stdio.h>
/**
* main - Entry point
*
* Description - A function that prints the alphabet in reverse
*
* Return: 0 success
*/
int main(void)
{

	int z;
	char al;
	char c = '\n';

	for (z = 'z'; z >= 'a'; z--)
	{
	al = z;
	putchar(al);
	}
	putchar(c);
	return (0);
}
