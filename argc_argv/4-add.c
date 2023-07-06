#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - add args if ints
* @argc: counts args
* @argv: array of args
* Decription: or error not int of less than 2
* Return: 0
*/
int main(int argc, char *argv[])
{
	int result = 0;
	int i;
	char *arg;
	int j;
	int number;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		number = atoi(arg);
		result = result + number;
	}
printf("%d\n", result);
return (result);
}
