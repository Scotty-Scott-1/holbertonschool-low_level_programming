#include "hash_tables.h"
/**
* hash_table_delete - delete hashtable
*
* Description: delete a hash table
* @ht: hash table
* Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;
	hash_node_t *temp2;

	if (ht == NULL)
	{
		return;
	}


while (i < ht->size)
{
	temp = ht->array[i];
	while (temp != NULL)
	{

		temp2 = temp->next;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = temp2;
	}
i++;
}
free(ht->array);
free(ht);
}
