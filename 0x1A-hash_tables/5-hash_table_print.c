#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int flag = 0;
	hash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			if (flag == 0)
			{
				printf("\'%s\': \'%s\'", current_node->key, current_node->value);
				flag = 1;
			}
			else
			{
				printf(", \'%s\': \'%s\'", current_node->key, current_node->value);
			}
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
