#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* fun_char - args - print only chars
* @args: a list of values of different types
* Description: a function
* Return: void
*/
void fun_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}
/**
* fun_int - args - print only ints
* @args: a list of values of different types
* Description: a function
* Return: void
*/
void fun_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}
/**
* fun_float - args - print only floats
* @args: a list of values of different types
* Description: floats are conveted to double by va list
* Return: void
*/
void fun_float(va_list args)
{
	double f = va_arg(args, double);

	printf("%f", f);
}
/**
* fun_string - args - print only strings
* @args: a list of values of different types
* Description: or prints (nil) if string is null
* Return: void
*/
void fun_string(va_list args)
{
	char *s = va_arg(args, char*);

	printf("%s", (s == NULL) ? "(nil)" : s);
}
/**
* print_all - print anything using cifs as a ref
* @format: a list/ref
* Description: where each letter corresponds to a type
* Return: void
*/
void print_all(const char * const format, ...)
{

ref_t reference[] = {
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
va_end(args);
printf("\n");


}
