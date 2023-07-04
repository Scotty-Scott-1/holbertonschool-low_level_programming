#include "main.h"
/**
* _memcpy - copy n btyes from src to dest
*
* @dest: destination
* @n: amount of bytes
* @src: source
*
* Description: return a pointer
*
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return ((char *)dest);
}
