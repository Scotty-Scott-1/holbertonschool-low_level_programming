#include "hash_tables.h"
/**
* hash_table_print - print nodes in a hash table
* Description: print and format
* @ht: hash table
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0;
	int j = 1;

	while (i < ht->size)
	{
		if (i == 0)
		{
			printf("{");
		}

		temp = ht->array[i];
		if (temp != NULL)
		{
			while (temp != NULL)
			{
				if (!j)
				printf(", ");
				printf("'%s': ", temp->key);
				printf("'%s'", temp->value);
				temp = temp->next;
				j = 0;
				}
		}
		i++;
	}
	i = 0;
	printf("}");
	printf("\n");
}
