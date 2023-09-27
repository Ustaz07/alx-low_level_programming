#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the pointer head
 *
 * Return: the data (n) of the deleted head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
