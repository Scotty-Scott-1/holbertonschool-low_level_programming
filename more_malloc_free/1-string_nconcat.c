#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*
*
*
*
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *ptr;
	unsigned int x;
	unsigned int y;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for(i = 0; s2[i] != '\0'; i++)
	{}
	for(j = 0; s1[j] != '\0'; j++)
	{}

	if (i > n)
	{

		ptr = malloc(n + j + 1);
		if(ptr == NULL)
		{
			return(NULL);
		}
		else
		{
			for (x = 0; x < j; x++ )
			{
				ptr[x] = s1[x];
			}
			for (y = 0; y < i; y++)
			{
				ptr[x + y] = s2[y];
			}
			ptr[i+j] = '\0';
			return (ptr);
		}
	}


	if(i < n)
	{
		ptr = malloc(j + i + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (x = 0; x < i; x++)
			{
				ptr[x] = s1[x];
			}
			for (y = 0; y < j; y++)
			{
				ptr[x + y] = s2[y];
			}
			ptr [i + j] = '\0';
			return(ptr);
		}

	}
return (0);

}
