#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: an int
* @n: an int
* Description - a function
*
* Return: void
*/
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%d, ", a[x]);
}
}
