#include "hash_tables.h"

/**
 * add_node - add new node to hash table
 * @head: head node
 * @key: key for the nodes
 * @value: value to the node
 * Return: pointer to the head
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *head;
	/* check if head is not null */
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}
	/* if head is null create tmp */
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (NULL);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;
	return (*head);
}

/**
 * hash_table_set - sets the node/hash in the table with its index
 * @ht: pointer to te table
 * @key: the key of the node to add
 * @value: value of the node to add
 * Return: 1 if successful or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hsh_index;
	hash_node_t **node;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	hsh_index = key_index((unsigned char *)key, ht->size);

	node = &(ht->array[hsh_index]);

	if (add_node(node, key, value) == NULL)
		return (0);

	return (1);
}
