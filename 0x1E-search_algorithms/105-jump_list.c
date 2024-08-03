#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present or list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, step;
    listint_t *current, *prev;

    if (!list || size == 0)
        return (NULL);

    jump = sqrt(size);
    current = list;
    prev = list;

    while (current->next && current->n < value)
    {
        prev = current;
        for (step = 0; step < jump && current->next; step++)
            current = current->next;
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
