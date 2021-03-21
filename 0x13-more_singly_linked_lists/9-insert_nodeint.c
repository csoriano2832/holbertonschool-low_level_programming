#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: the first element of a linked list
  * @idx: the index of the list where new node should be added
  * @n: an int value to be stored in the new node
  *
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (tmp)
	{
		if (index == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		index++;
	}

	return (NULL);
}
