#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a list
 * @head: A pointer to listint_t structure
 * Return: The address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start_one = head, *start_two = head;

	while (start_one && start_two && start_two->next)
	{
		start_one = start_one->next;
		start_two = start_two->next->next;
		if (start_one == start_two)
		{
			start_one = head;
			while (start_one != start_two)
			{
				start_one = start_one->next;
				start_two = start_two->next;
			}
			return (start_one);
		}
	}
	return (NULL);
}
