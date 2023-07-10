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
	unsigned int i = 0;
	char *s2;
	unsigned int j = 0;



	if (str == NULL)
{
	return ('\0');
}

	while (str[i] != '\0')
	{
		i++;
	}
	s2 = malloc(i+1);


 	if (s2 == 0 || i == 0)
	{
		return ('\0');
	}
	while (j < i)
	{
		s2[j] = str[j];
		j++;
	}

	return (s2);


}

