#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - convert a binary to int
* @b: char string containing binary
* Description: convert binary to int
* Return: result
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;
	unsigned int powerof = 1;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] - '0' == 0 || b[i] - '0' == 1)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	i -= 1;
	while (i >= 0)
	{
		if (b[i] - '0' == 1)
	{
		result += powerof;
	}
		i--;
		powerof *= 2;
	}
return (result);
}
