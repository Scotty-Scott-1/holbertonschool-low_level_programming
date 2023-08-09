#include "hash_tables.h"
/**
* hash_table_set - add a node o a hash table
*
* Description: add a node and set as head of nodes linked list
* @key: key of the new node
* @value: value of the new node
* @ht: the hash table in question
* Return: 0 for success 1 for failure
*
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *newNode;

	if (key == NULL || ht == NULL)
	{
		return (1);
	}

index = key_index((unsigned char *)key, ht->size);

newNode = malloc(sizeof(hash_node_t));
if (newNode == NULL)
{
return (1);
}

newNode->key = strdup(key);
newNode->value = strdup(value);
newNode->next = ht->array[index];
ht->array[index] = newNode;

return (0);
}

