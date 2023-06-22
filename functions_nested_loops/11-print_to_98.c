#include "main.h"
#include <stdio.h>
/**
* print_to_98 - a function
* @n: an int
* Description - prints numbers
*
* Return: void
*/
void print_to_98(int n)
{
	int re;

	if (n <= 98)
	{
	for (re = n; re <= 98; re++)
	{
	printf("%d", re);
	if (re != 98 && n != 98)
	{
	printf(", ");
	}
	}
	}
	else
	{
	for (re = n; re >= 98; re--)
	{
	printf("%d", re);
	if (re != 98 && n != 98)
	{
	printf(", ");
	}
	}
	}
	printf("\n");
}
