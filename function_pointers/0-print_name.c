#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - function that calls f
* @f: - function that prints
* @name: a name
* Description: print name
* Return: void
*
*/



void print_name(char *name, void (*f)(char *))
{
	if (*f == NULL)
	{
		return;
	}

	f(name);
}
