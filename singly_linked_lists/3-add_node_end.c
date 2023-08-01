#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* add_node_end - a function that adds a new a node after head
*
* Description: adds a new node to the end of a list
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


	/*1. create and malloc a new node. 2. handle if new node is null*/
/*1*/	newNode = malloc(sizeof(list_t));
/*2*/	if (newNode == NULL)
	{
		return (NULL);
	}

	/*1 get the string length. 2 malloc string length.*/
	/*3 handle is new node.str is null*/
/*1*/	while (str[i] != '\0')
	{
		i++;
	}
/*2*/	newNode->str = malloc(i + 1);
/*3*/	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

		/*1 copy str arg to new node.str*/
/*1*/		while (j < i)
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
			/*traverse the list and set temp to the end*/
			temp = *head;

			while (temp->next != NULL)
			{
				temp = temp->next;
			}

			/*set temp.next to new node*/
			temp->next = newNode;
	}

	newNode->len = i;
	return (newNode);
}
