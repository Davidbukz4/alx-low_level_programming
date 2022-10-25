#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head node's data(n)
 * @head: pointer to the first node
 * Return: the deleted node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *currentNode, *saveData;

	if (*head == NULL)
		return (0);

	temp = currentNode = saveData = *head;
	if (*head)
	{
		*head = currentNode->next;
		free(temp);
	}
	else
	{
		saveData->n = 0;
	}

	return (saveData->n);
}
