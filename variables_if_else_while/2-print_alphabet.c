#include <stdio.h>
/**
* main - Entry point
*
* Description - a function
*
* Return: 0
*/
int main(void)
{

	int a;
	char b;
	char c = '\n';

	for (a = 'a'; a <= 'z'; a++)
	{
	b = a;
	putchar(b);
	}
	putchar(c);
	return (0);
}
