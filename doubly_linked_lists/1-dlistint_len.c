#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* dlistint_len - a function that prints the
*
* Description: prints a string and string length.
* @h: struct list of nodes
* Return: the amount of nodes
*
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
return (i);



}
