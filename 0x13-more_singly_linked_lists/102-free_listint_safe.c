#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to a pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
		counter++;

		if (temp <= current)
			break;
	}

	*h = NULL;
	return (counter);
}

