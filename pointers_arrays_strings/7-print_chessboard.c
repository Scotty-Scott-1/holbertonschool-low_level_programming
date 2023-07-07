/**
* print_chessboard - print chars in chess
* @a: a string
* Description - a function
* Return: void
*/
#include "main.h"
#include <stdio.h>
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i != 8; i++)
	{
		for (j = 0; j != 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
