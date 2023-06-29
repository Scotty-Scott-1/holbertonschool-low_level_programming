#include "main.h"
#include <stdio.h>
/**
* string_toupper - convert to uppercase
* @str: a string
*
* Description: a function
*
* Return: char
*/
char *cap_string(char *str)
{

	int i;



		for (i = 0; str[i] != '\0'; i++)
	{
			if (str[i] == ' ' ||
			str[i] == '\n'  ||
			str[i] == '\t' ||
			str[i] == ',' ||
			str[i] == ';' ||
			str[i] == '.' ||
			str[i] == '!' ||
			str[i] == '?' ||
			str[i] == '"' ||
			str[i] == '(' ||
			str[i] == ')' ||
			str[i] == '{' ||
			str[i] == '}')

				{
					str[i+1] = str[i+1] -32;
					i++;
				}
	}
	return (str);
}

