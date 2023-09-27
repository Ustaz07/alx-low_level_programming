#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to the pointer head
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *temp, *d_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	d_node = *head;
	while (i < index)
	{
		if (d_node == NULL)
			return (-1);
		d_node = d_node->next;
		i++;
	}

	if (d_node == NULL || d_node->next == NULL)
		return (-1);

	temp = d_node->next;
	d_node->next = temp->next;
	free(temp);

	return (1);
}

