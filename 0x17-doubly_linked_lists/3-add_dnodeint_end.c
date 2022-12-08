#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to head node
 * @n: node data
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail, *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	tail = *head;
	/* traverse to the end node */
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = newnode;
	newnode->prev = tail;
	tail = newnode;

	return (newnode);
}
