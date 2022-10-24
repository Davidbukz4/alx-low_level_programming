#include "lists.h"

/**
 * sum_listint - sums all the data(n) of a listint_t linked list
 * @head: pointer to the first node
 * Return: sum of all the data(n) of the linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	if (sum == 0)
		return (0);

	return (sum);
}
