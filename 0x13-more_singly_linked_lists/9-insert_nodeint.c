#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: position where the new node should be added
 * @n: data(n) to be assigned to new node
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int i, count;

	i = count = 0;
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	temp = *head;
	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (*head);
	}

	while (i < idx - 1)
	{
		temp = temp->next;
		if (!temp)
		{
			free(newNode);
			return (NULL);
		}
		i++;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
