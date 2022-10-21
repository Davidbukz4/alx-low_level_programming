#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a 'list_t' list
 * @head: first node
 * @str: string to be added
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i;

	i = 0;
	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	if (str != NULL)
	{
		while (str[i])
			i++;
		newNode->len = i;
		newNode->str = strdup(str);
	}
	else
	{
		newNode->len = 0;
		free(newNode);
		return (NULL);
	}

	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = *head;
		*head = newNode;
	}

	return (newNode);
}
