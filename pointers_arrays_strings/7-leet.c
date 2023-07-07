#include "main.h"
/**
* leet - convert chars to other chars
* @s: a string
* Description: a function
*
* Return: char
*/
char *leet(char *s)
{
	int i;
	int j;
	char num[5] = "43071";
	char c[5] = "aeotl";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; c[j] != '\0' ; j++)
		{
			if (s[i] == c[j] || s[i] == c[j] - 32)
			{
				s[i] = num[j];
			}
		}
	}
return (s);
}
