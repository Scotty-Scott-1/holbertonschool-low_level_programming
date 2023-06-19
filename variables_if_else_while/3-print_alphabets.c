#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point of the function
*
* Description - Prints the alphabet in lowercase then uppercase
*
* Return: 0 Success
*/
int main(void)
{
	int i;
	char A;
	char a;
	int I;
	char new = '\n';

	for (i = 'a'; i <= 'z'; i++)
	{
	a = i;
	putchar(a);
	}
	for (I = 'A'; I <= 'Z'; I++)
	{
	A = I;
	putchar(A);
	}
	putchar(new);
	return (0);
}
