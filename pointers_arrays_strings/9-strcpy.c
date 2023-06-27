#include "main.h"
#include <stdio.h>
/**
* _strcpy - copy string pointed to by src
* @src: an int
* @dest: an int
* Description - to pointer dest. include null value
*
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	char* destcopy = dest;

while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';

return (destcopy);
}
