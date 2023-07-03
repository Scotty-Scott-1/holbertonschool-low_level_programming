#include "main.h"
/**
* factorial - print fact of n
* @n: an int
* Description: if less than 0 -1
*
* Return: int
*
*/
int factorial(int n)
{
	if (n == 0)
{
	return (1);
}
	else if (n < 0)
{
	return (-1);
}
return (n * factorial(n - 1));
}
