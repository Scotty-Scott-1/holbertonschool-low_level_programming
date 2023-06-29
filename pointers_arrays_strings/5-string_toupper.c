#include "main.h"
#include <stdio.h>
/**
* string_toupper - convert to uppercase
* @str: a string
*
* Description: a function
*
* Return: char *
*/


char *string_toupper(char *str)
{
int i;





for (i=0 ;str[i] != '\0'; i++)
{
	printf("hello\n");
	if(str[i] >= 'a' && str[i] <= 'b')
	str[i] = str[i] -32;
}
return (char *) str;
}
