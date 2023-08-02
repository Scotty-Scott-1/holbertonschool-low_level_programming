#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
* sum_dlistint - calcualtes the sum of node.n for entire list
*
* Description: a function that returns the sum of n of each node
* @head: pointer to head
* Return: sum
*
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
return (sum);

}
