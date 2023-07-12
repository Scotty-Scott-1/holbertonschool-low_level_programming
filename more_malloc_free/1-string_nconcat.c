#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - contact 2 strings to n
* @s1: a string
* @s2: a string
* @n: an int
* Description - a function
* Return: void
*
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s2[i] != '\0'; i++)
	{}
	for (j = 0; s1[j] != '\0'; j++)
	{}
	if (i > n)
	{
		ptr = malloc(n + j + 1);

		if (ptr == NULL)
			return (NULL);
		for (x = 0; x < j; x++)
			ptr[x] = s1[x];
		for (y = 0; y < n; y++)
			ptr[x + y] = s2[y];
		ptr[n + j] = '\0';
	}
	if (i < n)
	{
		ptr = malloc(j + i + 1);
		if (ptr == NULL)
			return (NULL);
		for (x = 0; s1[x] != '\0'; x++)
			ptr[x] = s1[x];
		for (y = 0; s2[y] != '\0'; y++)
			ptr[x + y] = s2[y];
		ptr[i + j] = '\0';
	}
	return (ptr);
}
