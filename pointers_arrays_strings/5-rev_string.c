#include "main.h"
/**
* rev_string - print string in reverse
* @s: a string
* Description - a function
*
* Return: void
*/
void rev_string(char *s)
{

	int i = 0;
	int r = 0;
	int l;

while (s[i] != '\0')
{
i++;
}
l = i - 1;
while (r < l)
{
char x = s[r];
s[r] = s[l];
s[l] = x;
r++;
l--;
}
}
