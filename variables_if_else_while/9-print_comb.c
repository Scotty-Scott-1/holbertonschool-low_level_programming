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

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a + '0');
	if (a < 9)
	{
	putchar (',');
	putchar (' ');
	}
	}
	putchar('\n');
	return (0);
}
