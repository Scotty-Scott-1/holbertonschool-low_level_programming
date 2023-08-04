#include "main.h"
#include <stdio.h>
/**
* set_bit - set the bit at the nth index to 1
* @n: pointer to an int
* @index: index position
* Description: set bit at the nth position to 1
*
* Return: specifed bit or -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int shift = 1;
	unsigned long int mask;

	if (index > 8 * 8)
	{
		return (-1);
	}

	mask = shift << (index);
	*n = (*n | mask);


return (1);

}













