#include "main.h"
#include <stdio.h>
/**
* clear_bit - set the bit at the nth index to 0
* @n: pointer to an int
* @index: index position
* Description: set bit at the nth position to 0
*
* Return: 1 for success or -1 for error
*/
int clear_bit(unsigned long int *n, unsigned int index)

{

	unsigned long int shift = 1;
	unsigned long int mask;

	if (index > 8 * 8)
	{
		return (-1);
	}
	mask = ~((shift) << (8 * 8 - 1 - index));
	*n = *n & mask;
	return (1);

}
