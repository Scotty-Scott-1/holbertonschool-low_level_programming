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
dlistint_t *newNode;

	unsigned int i = 0;
	dlistint_t *temp = head;


	newNode = malloc(sizeof(dlistint_t));


	if (newNode == NULL || head == NULL)
	{
		return (NULL);
	}

	while (index != i)
	{
		temp = temp->next;
		i++;
	}
	if (head != NULL)
	{
	newNode->next = temp->next;
	newNode->prev = temp->prev;
	temp = temp->next;
	temp->prev = newNode;
	newNode->next = temp;
	}
return (newNode);
}
