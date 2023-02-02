#include "hash_tables.h"

/**
 * hash_table_create - create hash table given size
 * @size: size
 * Return: pointer to table; NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);

	if (array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = NULL;

	ht->array = array;
	ht->size = size;

	return (ht);
}
