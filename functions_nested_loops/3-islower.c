#include "main.h"
#include <ctype.h>
/**
* _islower - A function that checks for lowercase character
*
* @c: A variable
* Descrption - Standard library provides a similar function: islower
*
* Return: int
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
