#include "hash_tables.h"
/**
* hash_table_get - get the value associated with a key
*
* Description: get the value of a key
* @ht: a hast table
* @key: a key
* Return: value or NULL
*
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;
	hash_node_t *temp;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}

return (NULL);
}
