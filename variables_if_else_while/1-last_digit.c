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
	lastn = n%10;
	printf("Last digit of %d is ", n);
	if(n > 5)
	{
	printf("%d and is greater than 5", lastn);
	}
	else if (n == 0) 
	{
	printf("0 is 0");
	}
	else
	{	
	printf ("%d and is less than 6 and not 0", lastn);
	}
	return (0);
}
