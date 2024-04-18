#include "hash_tables.h"

/**
 * hash_table_create - C function that creates a hash table
 * @size: Size of the array
 *
 * Return: NULL if something goes wromg
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_ht == NULL)
	{
		return (NULL);
	}
	new_ht->size = size;
	return  (new_ht);
}
