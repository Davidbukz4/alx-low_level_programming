#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: pointer to first node
 * Return: number of elements(nodes)
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
