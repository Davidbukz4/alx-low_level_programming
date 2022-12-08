#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a newnode at a given position
 * @h: double pointer to head node
 * @idx: index of the list where the new node should be added
 * @n: newnode data
 * Return: address of the newnode, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	unsigned int count, i = 1;

	count = 0;
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	temp = *h;
	for (; temp; count++)
		temp = temp->next;
	if (idx > count)
		return (NULL);
	temp = *h;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->next->prev = newnode;

	return (newnode);
}
