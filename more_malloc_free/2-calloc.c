#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _calloc - assign mem and set to 0
* @nmemb: an unsigned int
* @size: an unsigned int
* Description - a function
* Return: void
*
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < nmemb; j++)
	{
		ptr[j] = 0;
	}

	return (ptr);
}
