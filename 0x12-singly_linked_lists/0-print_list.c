#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			node_count++;
		}

		else
		{
			printf("[%i] %s\n", h->len, h->str);
			node_count++;
		}

		h = h->next;
	}

	return (node_count);
}
