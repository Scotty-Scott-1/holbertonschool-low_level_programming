#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* get_dnodeint_at_index - returns a node the at the nth position
*
* Description: returns a node
* @head: pointer to  head
* @index: the position of node in question
* Return: address of node
*
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{


	unsigned int i = 0;
	dlistint_t *temp = head;


	while (index != i)
	{
		if (temp != NULL)
		{
		temp = temp->next;
		i++;
		}
		else
		return (NULL);

	}
	return (temp);
}
