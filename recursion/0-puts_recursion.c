#include "main.h"
/**
* _puts_recursion - print string using recursion
* @s: a string
*
* Description: print first element. inc. new line
*
* Return: void
*/
void _puts_recursion(char *s)
{
		if (* s != '\0')
	{
			_putchar(*s);
			s++;
			_puts_recursion(s);
		}
			else
		{
			_putchar('\n');
	}		
}
















