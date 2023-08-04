#include "main.h"
#include <stdio.h>
/**
* get_bit - get the bit at the nth index
* @n: the int passed
* @index: index position
* Description: convert a int to binary
*
* Return: void
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shift = 1;
	unsigned int mask;
	unsigned int result;

	mask = shift << index;
	result = (n & mask) != 0;

return (result);

}
