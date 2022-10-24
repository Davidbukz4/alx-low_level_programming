#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the address of the linked list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *nextNode;

	if (head == NULL || *head == NULL)
		return (NULL);

	prevNode = NULL;
	nextNode = *head;
	while (nextNode != NULL)
	{
		nextNode = nextNode->next;
		(*head)->next = prevNode;
		prevNode = *head;
		(*head) = nextNode;
	}
	*head = prevNode;
	return (*head);
}
