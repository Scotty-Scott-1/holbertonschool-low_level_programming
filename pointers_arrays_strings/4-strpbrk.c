#include "main.h"
/**
 *_strpbrk - search for first occurances of accept in s
 * @s: pointer to a string
 * @accept: pointer to a string
 * Description: recreate a functoin
 *
 * Return: char
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	char *result;

while (s[i] != '\0')
{
	j = 0;

	while (accept[j] != '\0')
	{
		if (accept[j] == s[i])
		{
			result = &s[i];
			return (result);
		}
		j++;
	}
i++;
}
result = '\0';
return (result);
}
