#include "main.h"
/**
* reverse_array - reverse an array
* @a: an int
* @n: an int
*
* Description: a function
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int b = n - 1;
	int c;

	while (i < b)
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
		i++;
		b--;
	}
}
