#include "lists.h"

/**
  * free_listint - frees a list
  * @head: the first element of a list
  *
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
