#include "main.h"
#include <stdio.h>
/**
* get_bit - get the bit at the nth index
* @n: the int passed
* @index: index position
* Description: get bit at the nth position
*
* Return: specifed bit or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shift = 1;
	unsigned int mask;
	unsigned int result;

	if (index > 8 * 8)
	{
		return (-1);
	}


	mask = shift << index;
	result = (n & mask) != 0;

return (result);

}
