#include "main.h"
/**
* swap_int - swap 2 values
* @a: an int
* @b: an int
* Description - using two pointers
*
* Result: void
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
