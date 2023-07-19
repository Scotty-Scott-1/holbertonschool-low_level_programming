#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - print strings followed by separator
* @separator: a string or char
* @n: number of args
* Description: a function that prints strings
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i + 1 != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

}
