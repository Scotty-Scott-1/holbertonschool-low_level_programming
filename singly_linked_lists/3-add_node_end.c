#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* add_node_end - a function that adds a new node to end of list
*
* Description: adds a new node to the end of a list. If head is null
* new node == head. If malloc fails return null
* @head: head of a linked list
* @str: a string
* Return: address of new node
*
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	int j = 0;
	list_t *temp;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
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
		if (head == NULL || *head == NULL)
		{
			*head = newNode;
		}
		else
		{
			temp = *head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newNode;
		}
	newNode->len = i;
	return (newNode);
}
