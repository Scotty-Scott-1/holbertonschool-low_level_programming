/*
* reverse_array - reverse andfd array
* @a: an int
* @n: an int
* Description: a function
*
* Return: void
*/
#include "main.h"
void reverse_array(int *a, int n)
{
	int i = 0;
	int b;

	while (i < n / 2)
	{
		b = a[i];
		a[i] = a[n - 1];
		a[n - 1] = b;
		i++;
		n--;
	}
}
