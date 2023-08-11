#include "hash_tables.h"
/**
* hash_table_create - create a hash table
* @size: length of array
* Decription: create a hash table
* Return: hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash;

	if (size == 0)
	{
		return (NULL);
	}

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
	{
		return (NULL);
	}


	hash->size = size;

	hash->array = malloc(sizeof(hash_node_t) * size);
	if(hash->array == NULL)
	{
		free(hash);
		return (NULL);

	}


	while (i < hash->size)
	{
		hash->array[i] = NULL;
		i++;
	}


return (hash);



}
