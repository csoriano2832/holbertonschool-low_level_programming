#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: the first node of a linked list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	int idx, jdx, numNodes = 0;
	listint_t *temp;
	listint_t *nodes[1024];

	for (idx = 0; *h != NULL; idx++)
	{
		for (jdx = 0; jdx < idx; jdx++)
		{
			if (nodes[jdx] == *h)
			{
				*h = NULL;
				return (numNodes);
			}
		}
		nodes[idx] = *h;
		temp = *h;
		*h = (*h)->next;
		free(temp);
		numNodes++;
	}
	*h = NULL;
	return (numNodes);
}
