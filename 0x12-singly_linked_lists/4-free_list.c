#include "lists.h"

/**
 * free_list - frees a 'list_t' list.
 * @head: first node of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}
