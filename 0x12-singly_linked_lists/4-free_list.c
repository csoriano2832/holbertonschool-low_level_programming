#include "lists.h"

/**
 * free_list - frees a list
 * @head: a list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		tmp->str = head->str;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
