#include "main.h"
#include <stdio.h>
/**
* _memset - copy n bytes to memory address
* @s: memory location
* @b: a char
* @n: number of bytes
* Description: added n bytes to s
*
* Return: char
*
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);



}
