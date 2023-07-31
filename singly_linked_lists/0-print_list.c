#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_list - a function that prints a string and length then moves
* on to the next node.
*
* Description: prints a string and string length.
* @h: struct list of nodes
* Return: the amount of nodes
*
*/

size_t print_list(const list_t *h)
{
int i = 0;

while (h != NULL)
{
	if (h->str == NULL)
	{

		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s \n", h->len, h->str);
	}

	h = h->next;
	i++;

}
return (i);
}
