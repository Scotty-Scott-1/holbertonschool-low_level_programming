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
free(head->next);
free(head->str);
free(head);
}
