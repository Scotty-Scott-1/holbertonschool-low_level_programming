#include "main.h"
/**
* cap_string - convert to first letter of each to uppercase
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
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
	{
		str[i + 1] = str[i + 1] - 32;
		i++;
	}
	}
	return (str);
}

