#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - A function that prints the elements in a list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *one = head, *two = head, *loop_node = NULL;

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;

		if (one == two)
		{
			loop_node = one;
			break;
		}
	}

	if (loop_node)
	{
		one = head;
		while (one != two)
		{
			one = one->next;
			two = two->next;
		}

		while (one != loop_node)
		{
			printf("[%p] %d\n", (void *)one, one->n);
			one = one->next;
			nodes++;
		}
		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		exit(98);
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}

	return (nodes);
}

