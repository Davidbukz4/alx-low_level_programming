#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to first node
 * Return: the number of node in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int count;
	long int addr_diff;

	count = addr_diff = 0;
	while (head)
	{
		addr_diff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (addr_diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
