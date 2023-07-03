#include "main.h"
/**
* _print_rev_recursion - print a string in rev
* @s: a string
* Description - if null return, else inc s call func, dec s, putchar
*
* Return: void
*
*/
void _print_rev_recursion(char *s)
{
		if (*s == '\0')
	{

	}
		else
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
