#include "main.h"
#include <stdio.h>
/**
* main - print amount of command line args
* @argc: counts args
* @argv: array of args
* Decription: should show new name of executable if changed
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc);
	return (0);
}
