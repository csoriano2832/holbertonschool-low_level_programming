#include "lists.h"
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
