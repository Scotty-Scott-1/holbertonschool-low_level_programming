#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* add_dnodeint - adds a node the beginning of a double linked list
*
* Description: adds a new node
* @head: pointer to pointer of head
* @n: an int variable in a node
* Return: address of new node
*
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL || head == NULL)
	{
		return (NULL);
	}

		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
		*head = newNode;


return (newNode);

}
