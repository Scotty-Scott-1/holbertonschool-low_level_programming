#include "main.h"
/**
* _prime - var n2 < 2 !prime.if above 2 and remander div > 0 !prime
* @n2: an int
* @div: = 1 and incremented
* Description - if n2 / div < div prime. else inc div
*
* return: int
*
*/


int _prime(int n2, int div)
{
if (n2 < 2)
{
	return (0);
}
	else if (n2 % div == 0 && div >= 2)
{
	return (0);
}
	else if (n2 / div < div)
	{
		return (1);
	}
	else
	{
	return (_prime(n2, ++div));
	}
}




int is_prime_number(int n)
{
		if (n < 2)
	{
		return (0);
	}
		else
	{
		return (_prime(n, 1));
	}

}
