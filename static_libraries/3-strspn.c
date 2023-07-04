#include "main.h"
/**
* _strspn - return bytes from first part of s
* @s: a string
* @accept: a string
* Description: that matches *accept
*
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int a = 0;
	unsigned int ui = 0;
	int m = 0;

		for (i = 0; s[i] != '\0'; i++)
	{
		m = 0;
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				ui++;
				m = m + 1;
				break;
			}

		}

		if (m == 0)
	{
		break;
	}
	}

return (ui);
}
