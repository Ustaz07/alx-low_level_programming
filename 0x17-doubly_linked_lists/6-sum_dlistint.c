#include "lists.h"

/**
 * sum_dlistint - A function that sums The elem.
 * @head: The pointer to head.
 * Return: The sum of all elements in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

