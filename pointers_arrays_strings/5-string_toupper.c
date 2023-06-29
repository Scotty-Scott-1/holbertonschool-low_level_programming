#include "main.h"
/**
* string_toupper - convert to uppercase
* @str: a string
* @ptr: a pointer
* Description: a function
*
* Return: char
*/
char *string_toupper(char *str)
{

	int i;
	for (i=0 ; str[i] != '\0'; i++)
{
	if(str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
}
return (str);
}
