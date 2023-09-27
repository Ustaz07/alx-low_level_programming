#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}

	return temp;
}

