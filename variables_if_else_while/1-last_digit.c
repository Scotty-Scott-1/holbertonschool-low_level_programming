#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description - a function
*
* Return: 0
*/
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	printf("Last digit of %d is ", n);
	if (lastn > 5)
	{
	printf("%d and is greater than 5 \n", lastn);
	}
	else if (lastn == 0)
	{
	printf("0 and is 0\n");
	}
	else
	{
	printf("%d and is less than 6 and not 0", lastn);
	}
	return (0);
}
