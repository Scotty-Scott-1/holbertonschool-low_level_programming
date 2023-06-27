#include "main.h"
/**
* _puts - print string length
* @str: a string
* Description - a function
*
* Return: int
*/
void _puts(char *str)
{
		int i = 0;
		while (str[i] != '\0')
		{
			_putchar('str[i]');
		i++;
		}
	_putchar('\n');
}
