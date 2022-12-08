#include "lists.h"

/**
 * dlistint_len - returns the number of element in a linked dlistint_t list
 * @h: pointer to the first node
 * Return: number of element in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (i);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
