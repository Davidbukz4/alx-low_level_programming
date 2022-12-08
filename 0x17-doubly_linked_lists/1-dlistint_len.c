#include "lists.h"

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
