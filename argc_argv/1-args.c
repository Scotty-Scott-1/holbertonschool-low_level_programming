#include "main.h"
#include <stdio.h>
/**
* main - print amount of command line args
* @argc: counts args
* @argv: array of args
* Decription: arg 0 is exc name
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc - 1);
	return (0);
}
