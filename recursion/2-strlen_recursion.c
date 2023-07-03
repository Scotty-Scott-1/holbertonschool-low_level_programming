#include "main.h"
/**
* _strlen_recursion - if not null, inc s, re s+1
* @s: an int
* Descrion - else return 0
*
* Return: int
*
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
		else
	{
		return (0);
	}
}
