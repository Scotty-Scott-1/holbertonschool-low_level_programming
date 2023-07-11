#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*
* Write a function that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);
Retur
*
*
*
*
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
	exit(98);
	}
	exit(0);
}
