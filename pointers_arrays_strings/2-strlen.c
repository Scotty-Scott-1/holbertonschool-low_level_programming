#include "main.h"
/**
* _strlen - print string length
* @s: a char
* Description - a function
*
* Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
