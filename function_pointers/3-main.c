#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - a function
* @argc: amount of command line agrd
* @argv: array of command line args
* Description: checks for errors and exits.
* calls get_op command line opertor as arg.
* sets command line ints as vars. calls get op with numbers as args
* Return: int
*/


int main(int argc, char *argv[])
{
int (*getoperator)(int, int);
int number1;
int number2;
int result;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
getoperator = get_op_func(argv[2]);
number1 = atoi(argv[1]);
number2 = atoi(argv[3]);

if (getoperator == NULL)
{
	printf("Error\n");
	exit(99);
}
if ((getoperator == op_div || getoperator == op_mod) && number2 == 0)
{
	printf("Error\n");
	exit(100);
}
result = getoperator(number1, number2);
printf("%d\n", result);
return (0);
}
