#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an nth position
 * of a listint_t linked list
 *
 * @head: pointer to the first node
 * @index: index of node to be deleted
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delNode;
	unsigned int i, count;

	i = count = 0;
	if (*head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	if (index > count)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;
	while (i < index - 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		i++;
	}

	delNode = temp->next;
	temp->next = delNode->next;
	free(delNode);

	return (1);
}
