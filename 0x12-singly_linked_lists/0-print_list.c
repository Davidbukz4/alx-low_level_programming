#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to list of strings
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
