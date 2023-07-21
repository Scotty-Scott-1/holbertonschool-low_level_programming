/**
* print_all - print anything using cifs as a ref
* @format: a list/ref
* Description: where each letter corresponds to a type
*
* Return: void
*
*/
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	int i = 0;
	char temp;
	char *temp2;
	double tempd;
	char *separator = ", ";
	va_list formats;

	va_start(formats, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
				temp = va_arg(formats, int);
				printf("%c", temp);
				break;
				case 'i':
				temp = va_arg(formats, int);
				printf("%d", temp);
				break;
				case 'f':
				tempd = va_arg(formats, double);
				printf("%f", tempd);
				break;
				case 's':
				temp2 = va_arg(formats, char *);
				if (*temp2 == '\0')
				{
					printf("(nil)");
				}
				printf("%s", temp2);
				break;
			}
			if (format[i + 1] != '\0' && format[i] != 'e')
			{
				printf("%s", separator);
			}
			i++; }
printf("\n");
return;
}
