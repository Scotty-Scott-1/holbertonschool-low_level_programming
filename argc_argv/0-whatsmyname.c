#include "main.h"
#include <stdio.h>
/**
* main - print executable name
* @argc: counts args
* @argv: array of args
* Decription: should show new name of executable if changed
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
