#include "main.h"
#include <stdio.h>
/**
* _strchr - return a pointer to c
* @c: a char
* @s: a string
*
* Description: a function
*
* Return: char
*
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	i++;
}
	if (c == '\0')
{
	return (&s[i]);
}

return (0);
}
