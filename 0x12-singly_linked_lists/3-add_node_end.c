#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A ptr to a ptr to the head of the list.
 * @str: The string to be duplicated.
 *
 * Return: The address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *temp;
	unsigned int length = 0;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	while (str[length])
		length++;

	n_node->len = length;
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = n_node;
	}

	return (n_node);
}

