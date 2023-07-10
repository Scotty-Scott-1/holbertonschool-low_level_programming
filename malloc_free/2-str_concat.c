#include "main.h"
#include <stdlib.h>
/**
*
* str_concat - concatanate two strings to mem location
* @s1: a string
* @s2: a string
* Description _ a function
*
* return: char
*
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *m;
	int x;
	int y;

	for (i = 0; s1[i] != '\0'; i++)
	for (j = 0; s2[j] != '\0'; j++)

	m = malloc(i + j + 1);

	if (s1 == NULL)
	{
		return (s2);
	}

	if (s2 == NULL)
	{
		return (s1);
	}


	for (x = 0; x < i; x++)
	{
	m[x] = s1[x];
	}


		for (y = 0; y < j; y++)
		{
			m[x + y] = s2[y];
		}


	m[i + j + 1] = '\0';

	return(m);
}
