#include "main.h"
/**
* puts2 - print every other char staring by 0
* @str: a string
* Description - a function
*
* Return: void
*/
void puts2(char *str)
{
int x = 0;
int i = 0;

while (str[x] != '\0')
	{
	x++;
	}

while (i < x)
{
_putchar(str[i]);
i++;
i++;

}
_putchar('\n');

}
