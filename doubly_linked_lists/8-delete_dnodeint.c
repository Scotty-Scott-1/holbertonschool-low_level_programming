#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* delete_dnodeint_at_index- delete a node at index[?] of the list
*
* Description: deleted a node at the a specific index
* @head: pointer to pointer to head
* @index: position of the inserted node
* Return: 1 for success -1 for failure
*
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	unsigned int i = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp->prev = NULL;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		if (temp->next != NULL)
		{
		temp = temp->next;
		i++;
		}
		else
		{
		return (-1);
		}
	}
		if (temp->prev != NULL)
		{
			temp->prev->next = temp->next;
		}
		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
	free(temp);
return (1);
}
