#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node a linked list
  * @head: the first element of a list
  * @index: the index of the node starting at 0
  *
  * Return: the node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (idx < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		idx++;
	}

	return(head);
}
