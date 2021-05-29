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
	char *key_dup, *value_dup;
	unsigned long int index = 0;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (strcmp(key, "") == 0)
		return (0);

	key_dup = strdup(key);
	if (key_dup == NULL)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
	{
		free(key_dup);
		return (0);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(key_dup);
		free(value_dup);
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);

	new->key = key_dup;
	new->value = value_dup;

	if (ht->array[index] == NULL)
		new->next = NULL;
	else
		new->next = ht->array[index];

	ht->array[index] = new;

	return (1);
}
