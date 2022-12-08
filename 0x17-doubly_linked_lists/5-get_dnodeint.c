#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: index of node to search for
 * Return: node at the position index of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	count = 0;
	if (!head)
		return (NULL);
	temp = head;
	while (temp)
	{
		count++;
		temp = temp->next;
	}

	if (index > count)
		return (NULL);
	temp = head;
	for (count = 1; count <= index; count++)
		temp = temp->next;
	return (temp);
}
