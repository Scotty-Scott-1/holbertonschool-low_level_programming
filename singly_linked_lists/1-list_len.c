#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* list_len - a function that prints the amount of nodes in h
*
* Description: prints the amount of nodes
* @h: a linked list
* Return: the amount of nodes
*
*/
size_t list_len(const list_t *h)
{
	int i = 0;

while (h != NULL)
{
	h = h->next;
	i++;
}
return (i);
}
