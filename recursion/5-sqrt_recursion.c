#include "main.h"
/**
* _add1 - add 1 to var sqtr. if = n sucess
* @n2: an int passed to function
* @sqrt: start at 0 add one until sucess
* Description: a function
* Return: int
*/
int _add1(int n2, int sqrt)
{
		if (sqrt * sqrt > n2)
		{
			return (-1);
		}
		else if (sqrt * sqrt == n2)
	{
		return (sqrt);
	}
		else
	{
		return (_add1(n2, ++sqrt));
	}
}
/**
* _sqrt_recursion - call other function
* @n: an int
* Description: a function
* Return: int
*/
int _sqrt_recursion(int n)
{
		if (n < 0)
	{
		return (-1);
	}
		else
	{
		return (_add1(n, 0));
	}
}



