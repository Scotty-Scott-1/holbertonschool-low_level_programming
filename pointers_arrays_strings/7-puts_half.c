#include "main.h"
/**
* puts_half - print 2nd half of a string
* @str: a string
* Description - a function
*
* Return: void
*/
void puts_half(char *str)
{
	int x =0;
	int half = 0;

while (str[x] != '\0')
{
x++;
}


if (x % 2 == 0 )


{
	half = x / 2;
	while(x > half)
	{
		half++;
		_putchar(str[half]);

	}




}
else {
	half = x -1 / 2;
while(x > half)
	{
		half++;
		_putchar(str[half]);



}




}

}
