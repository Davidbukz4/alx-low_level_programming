#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *currentNode;

	if (*head == NULL)
		return;
	currentNode = *head;
	while (currentNode != NULL)
	{
		temp = currentNode;
		currentNode = currentNode->next;
		free(temp);
	}
	*head = NULL;
}
