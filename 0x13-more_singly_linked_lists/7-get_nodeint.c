#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: index of the node, starting at 0
 * Return: address of the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int traverse = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (traverse < index)
	{
		temp = temp->next;
		traverse++;
	}
	if (temp == NULL)
		return (NULL);

	return (temp);
}
