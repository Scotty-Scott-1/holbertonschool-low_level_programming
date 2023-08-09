#include "hash_tables.h"
/**
* key_index - calculate the index of a given key
* Description: key is passed to hash_djb2 then % size
* @key: key value
* @size: size of the hash table array
* Return: (i) index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value = 0;
	unsigned long int i = 0;

value = hash_djb2(key);
i = value % size;

return (i);





}
