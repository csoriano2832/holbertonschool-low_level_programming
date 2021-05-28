#include "hash_tables.h"

/**
 * hash_table_set - adds an element tot the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *dup_value;
	unsigned long int index = 0;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (strcmp(key, "") == 0)
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new->key = (char *)key;
	new->value = dup_value;

	if (ht->array[index] == NULL)
		new->next = NULL;
	else
		new->next = ht->array[index];

	ht->array[index] = new;

	return (1);
}
