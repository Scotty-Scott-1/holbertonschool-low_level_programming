#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - print sum of 2 args if there are 2
* @argc: counts args
* @argv: array of args
* Decription: or error
* Return: 0
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}
