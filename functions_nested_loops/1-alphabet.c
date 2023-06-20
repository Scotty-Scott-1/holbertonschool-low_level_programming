#include <main.h>
/**
* main - Entry point
*
* Description - Prints the alphabet in lowercase followed by a new line
*
* Return: 0 success
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');

	return (0);
}
