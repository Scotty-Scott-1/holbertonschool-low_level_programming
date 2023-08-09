

#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *hash = malloc(sizeof(hash_table_t));
	hash->array = calloc(size, sizeof(hash_node_t));

	if(hash->array == NULL)
	{
		return (NULL);
	}

	hash->size = size;
	if(hash == NULL)
	{
		return (NULL);
	}
	while(i < hash->size)
	{
		hash->array[i] = NULL;
		i++;
	}


return (hash);



}
