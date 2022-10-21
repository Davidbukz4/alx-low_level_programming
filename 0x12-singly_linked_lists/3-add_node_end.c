#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a 'list_t' list
 * @head: first node
 * @str: string to add
 * Return: the address of the new address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newNode;
	unsigned int i;

	i = 0;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
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

	newNode->next = NULL;
	if (*head == NULL)
		return (NULL);
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
