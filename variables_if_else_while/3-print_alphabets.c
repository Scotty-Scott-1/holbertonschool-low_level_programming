#include <stdio.h>
#include <ctype.h>
/**
* Main - Entry point of the function
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

	for (i = 'A'; i <= 'Z'; i++)
	{
	a = i;
	}
	putchar(a);
	A = toupper(a);
	putchar(A);
	return (0);

}

