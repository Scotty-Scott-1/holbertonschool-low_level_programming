#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* get_dnodeint_at_index - adds a node the at the nth position
*
* Description: adds a new node
* @head: pointer to  head
* @index: the position that new node is inserted
* Return: address of new node
*
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{


	unsigned int i = 0;
	dlistint_t *temp = head;


	while (index != i)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}

	return (temp);
}
