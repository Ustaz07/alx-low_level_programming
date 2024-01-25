#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_dnodeint - Adds a node to the head of the list
 * @head: Double pointer to the head of the list
 * @n: Data to add into the new node
 * Return: A pointer to the new element, or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)

		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!head || !(*head))
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}

