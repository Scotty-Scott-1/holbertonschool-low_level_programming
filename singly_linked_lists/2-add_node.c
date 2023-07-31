#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* add_node - a function that adds a new a node after head
*
* Description: adds a new node and sets head to point to new node.
* @head: head of a linked list
* @str: a string
* Return: address of new node
*
*/

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	int j = 0;

	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	newNode->str = malloc(i + 1);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (j < i)
	{
		newNode->str[j] = str[j];
		j++;
	}

	newNode->str[j] = '\0';
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;

return (newNode);
}
