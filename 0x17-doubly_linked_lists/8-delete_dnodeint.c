#include "lists.h"

/**
 *delete_dnodeint_at_index - insert node into a doubly linked list
 *@head: double pointer to head node
 *@index: position of node to delete
 *Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	for (temp = *head; temp; count++)
		temp = temp->next;
	if (index >= count)
		return (-1);
	count = 0;
	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			if (index == 0 && temp->next)
			{
				*head = temp->next;
				(*head)->prev = NULL;
				free(temp);
			}
			else if (index == 0 && !(temp->next))
			{
				free(*head);
				*head = NULL;
			}
			else
			{
				if (temp->next)
					(temp->next)->prev = temp->prev;
				(temp->prev)->next = temp->next;
				free(temp);
			}
			return (1);
		}
		count++;
		temp = temp->next;
	}
	return (-1);
}
