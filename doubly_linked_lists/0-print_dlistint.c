#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_dlistint - a function that prints dlistn.n of all nodes
* Description: a function
* @h: head of a linked list
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{

	int i = 0;

	while (h != NULL)
	{

		if (h->n != '\0')
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
		else
		{
			printf("0");
		}
	}
return (i);
}
