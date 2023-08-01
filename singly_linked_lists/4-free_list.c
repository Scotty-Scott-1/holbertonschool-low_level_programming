#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* free_list - a function that frees head
* Description: free head
* @head: head of a linked list
* Return: void
*/

void free_list(list_t *head)
{

list_t *saved;
list_t *temp;
saved = head;

while (saved != NULL)
{
	temp = saved->next;
	free(saved->str);
	free(saved);
	saved = temp;

}

}
