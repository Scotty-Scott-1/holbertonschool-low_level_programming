#include "main.h"
/**
*
*
*
*
*
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int a = 0;
	unsigned int ui = 0;

		for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{ui++;
			break;}

		}
	}


return (ui);
}
