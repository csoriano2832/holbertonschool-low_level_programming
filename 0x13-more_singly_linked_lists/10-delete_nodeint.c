#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: the first element of a linked list
 * @index: the index of the list where new node should be added
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int currentIndex;
	listint_t *tmpHead;
	listint_t *tmpPrev;

	if (*head == NULL)
		return (-1);

	tmpHead = *head;
	for (currentIndex = 0; currentIndex < index; currentIndex++)
	{
		tmpHead = tmpHead->next;
		if (tmpHead == NULL)
			return (-1);
	}

	if (index > 0)
	{
		tmpPrev = *head;
		for (currentIndex = 0; currentIndex < index - 1; currentIndex++)
		{
			tmpPrev = tmpPrev->next;
		}

		tmpPrev->next = tmpHead->next;
		free(tmpHead);
		return (1);
	}

	(*head) = (*head)->next;
	free(tmpHead);
	return (1);
}
