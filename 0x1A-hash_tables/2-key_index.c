#include "hash_tables.h"

/**
 * key_index - gives us the index
 * @key: the key to find index
 * @size: size of the array
 * Return: index or 0 if not found
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}

