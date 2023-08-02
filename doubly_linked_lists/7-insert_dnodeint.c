#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* insert_dnodeint_at_index - insert a new node at index[?] of the list
*
* Description: insert a new node at the a specific index
* @h: pointer to pointer to head
* @idx: position of the inserted node
* @n: a variable in the node
* Return: sum
*
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

dlistint_t *newNode;

	unsigned int i = 0;
	dlistint_t *temp = *h;


	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;


	if (newNode == NULL)
	{
		return (NULL);
	}
		newNode->prev = NULL;
		newNode->next = NULL;

	if (*h == NULL)
	{
		return (newNode);
	}
	if (idx == 0)
	{
		newNode->next = temp;
		temp->prev = newNode;
		temp = newNode;
		return (newNode);
	}

	while (idx != i + 1)
	{
		if (temp != NULL)
		{
		temp = temp->next;
		i++;
		}
		else
		{
		free(newNode);
		return (NULL);
		}
	}
	if( temp->next == NULL)
	{
		temp->next=newNode;
		newNode->prev = temp;
	}
	else
	{
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next->prev = newNode;
	temp->next = newNode;
	}

	return (newNode);
	}
