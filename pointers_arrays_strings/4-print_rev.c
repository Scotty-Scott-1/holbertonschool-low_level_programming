#include "main.h"
/**
* print_rev - print string in reverse
* @s: a string
* Description - a function
*
* Return: void
*/
void print_rev(char *s)
{
	int i = 0;
	int r;

while (s[i] != '\0')
{
i++;
}
r = i - 1;
while (r >= 0)
{
_putchar(s[r]);
r--;
}
_putchar('\n');
}
