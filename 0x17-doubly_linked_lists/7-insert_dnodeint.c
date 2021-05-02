#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: the first element of a linked list
  * @idx: the index of the list where new node should be added
  * @data: an int value to be stored in the new node
  *
  * Return: the address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int data)
{
	unsigned int index = 0;
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = data;

	if (idx == 0)
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
		return (new);
	}

	while (tmp != NULL)
	{
		if (index == idx - 1)
		{
			new->next = tmp->next;
			new->next->prev = new;
			new->prev = tmp;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		index++;
		if (index > idx)
			return (NULL);
	}

	return (NULL);
}
