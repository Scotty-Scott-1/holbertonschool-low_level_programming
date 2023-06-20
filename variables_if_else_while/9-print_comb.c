#include <stdio.h>
/**
* main - Program that prints all possible combinations of single-digit numbers
*
* Descrption - a program that prints combinations
*
* Return: 0 success
*/
int main(void)
{
	int a;
	char n = '\n';
	char s = ' ';
	char c = ',';

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a + '0');
	if (a < 9)
	{
	putchar (c);
	putchar (s);
	}
	}
	putchar(n);
	return (0);
}
