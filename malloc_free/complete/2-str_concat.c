#include "main.h"
#include <stdlib.h>
/**
* *str_concat- concatanate two strings to mem location
* @s1: a string
* @s2: a string
* Description: a function
*
* Return: char
*
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *m;
	int x;
	int y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}

	m = malloc(i + j + 1);

	if (m == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < i; x++)
	{
		m[x] = s1[x];
	}
	for (y = 0; y < j; y++)
	{
		m[x + y] = s2[y];
	}

	m[i + j] = '\0';

	return (m);
}
