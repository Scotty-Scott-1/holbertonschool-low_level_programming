#include "main.h"
#include <stdlib.h>
/**
* create_array - assign x bytes of memery
* @size: an unsigned int
* @c: a char
* Description - assign value of c
*
* Return: char
*
*
*/
char *create_array(unsigned int size, char c)
{
	char *c2;
	unsigned int i = 0;

	c2 = malloc(size);

	if (c2 == 0)
	{
		return ('\0');
	}
	while (i < size)
	{
		c2[i] = c;
		i++;
	}
	return (c2);
}
