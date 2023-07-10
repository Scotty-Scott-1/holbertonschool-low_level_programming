#include "main.h"
#include <stdlib.h>
/**
* _strdup - copy a string to allocated memory
* @str: a pointer to string
* Description - return pointer to the copied string
*
* Return: char
*
*
*/
char *_strdup(char *str)
{
	int i = 0;
	char *s2;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	s2 = malloc(i+1);

	if (s2 == 0 || s2 == 0)
	{
		return ('\0');
	}

	while (str[j] != '\0')
	{
		s2[j] = str[j];
		j++;
	}

	return (s2);


}

