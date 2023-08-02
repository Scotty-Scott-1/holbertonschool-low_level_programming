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
		newNode->prev = *head;
		newNode->next = NULL;
	}
	else
	{

		newNode->prev = *head;
		newNode->next = *head;
		*head = newNode;
		newNode->n = n;
	}
return (newNode);




}
