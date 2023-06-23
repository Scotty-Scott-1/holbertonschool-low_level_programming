#include "main.h"
/**
* main - 3 and 5 FizzBuzz
*
* Description - print 1 to 100. with space.
*
* Return: 0 sucess
*
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz ");
	}
	else if (i % 3 == 0 && i % 5 != 0)
	{
	printf("Fizz ");
	}
	else if (i % 5 == 0 && i % 3 != 0 && i <100)
	{
	printf("Buzz ");
	}
	else if (i % 5 == 0 && i % 3 != 0 && i ==100)
	{
	printf("Buzz");
	}
	else if (i % 3 != 0 && i % 5 !=0)
	{
	printf("%d", i);
	printf(" ");
	}
	}
	printf("\n");

return (0);
}
