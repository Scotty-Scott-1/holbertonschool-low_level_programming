#include "main.h"
#include <stdio.h>
/**
* flip_bits - count the bits flipped from n to m
* @n: an int
* @m: an int
* Description: flip bits and count 1s
*
* Return: number of bits flipped
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int result = 0;

	i = n ^ m;
	while (i != 0)
{
		result = result + (i & 1);
		i  = i >> 1;
}
return (result);

}
