#include "main.h"
#include <ctype.h>
/**
* _isalpha - Checks for lowercase or uppercase character
*
* @c: A variable
* Descrption - Standard library provides a similar function: isalpha
*
* Return: int
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
