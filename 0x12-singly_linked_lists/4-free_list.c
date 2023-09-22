#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees all elements in a linked list.
 * @head: A pointer to the head element of the list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}

