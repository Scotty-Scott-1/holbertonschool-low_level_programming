#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - print int agrs
* @separator: a char or string
* @n: number of args
* Description: print numbers then separator. no sep on last
*
* Return: void
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;


	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(args, int);
		printf("%d", result);

		if (separator != NULL && i + 1 != n)
		{
			printf("%s", separator);
		}


	}
		printf("\n");
}
