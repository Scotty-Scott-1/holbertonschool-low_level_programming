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
	int first = 0;
	int last;

while (s[i] != '\n')
{
i++;
}
last = i - 1;
while (first < last)
{
	s[first] = s[last];
}











}
