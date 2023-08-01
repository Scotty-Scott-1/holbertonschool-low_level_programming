#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* free_dlistint - frees list starting at *head
* Description: frees a list
* @head: pointer to head
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *saved;

	saved = head;

	while (saved != NULL)
	{
		temp = saved->next;
		free(saved);
		saved = temp;
	}
	free(head);
}
