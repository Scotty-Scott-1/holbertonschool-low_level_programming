#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* add_dnodeint_end - adds a node the end of a double linked list
*
* Description: adds a new node
* @head: pointer to pointer of head
* @n: an int variable in a node
* Return: address of new node
*
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	/*malloc a new list*/
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	if (head == NULL || *head == NULL)
	{
		newNode->n = n;
		*head = newNode;
		newNode->prev = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
		newNode->n = n;
	}

	return (newNode);
}
