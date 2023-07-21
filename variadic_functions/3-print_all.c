#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void fun_char(va_list args)
{
	char c = va_arg(args, int);
	printf("%c", c);
}

void fun_int(va_list args)
{
	int i = va_arg(args, int);
	printf("%d", i);
}

void fun_float(va_list args)
{
	double f = va_arg(args, double);
	printf("%f",f);
}

void fun_string(va_list args)
{
	char *s = va_arg(args, char*);
	printf("%s", (s == NULL) ? "(nil)" : s);
}


/**
* print_all - print anything using cifs as a ref
* @format: a list/ref
* Description: where each letter corresponds to a type
*
* Return: void
*
*/


void print_all(const char * const format, ...)
{

ref_t reference [] = {
{"c", fun_char},
{"i", fun_int},
{"f", fun_float},
{"s", fun_string},
};

	va_list args;
	int i = 0;
	int j;
	char *separator = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *reference[j].ref)
			{
				printf("%s", separator);
				reference[j].func(args);
				separator = ", ";
				break;
			}
			j++;
		}

		i++;
	}
va_end (args);
printf("\n");


}
