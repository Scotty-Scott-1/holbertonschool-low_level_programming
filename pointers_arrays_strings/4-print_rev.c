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
	int i = '0';

while (s[i] != '\0')
{
i++;
}
while (i >= 1)
{
	i--;
_putchar(s[i]);

}
_putchar('\n');
}
