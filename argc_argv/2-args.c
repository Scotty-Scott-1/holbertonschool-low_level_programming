#include "main.h"
#include <stdio.h>
/**
* main - print amount of command line args + new line
* @argc: counts args
* @argv: array of args
* Decription: arg 0 is exc name
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
