#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * create_list - Creates a singly linked list from an array.
 * @array: Array to create the list from.
 * @size: Size of the array.
 * Return: Pointer to the head of the list.
 */
listint_t *create_list(int *array, size_t size)
{
    listint_t *head, *node, *tmp;
    size_t i;

    if (array == NULL || size == 0)
        return (NULL);

    head = malloc(sizeof(listint_t));
    if (head == NULL)
        return (NULL);
    head->n = array[0];
    head->index = 0;
    head->next = NULL;
    tmp = head;

    for (i = 1; i < size; i++)
    {
        node = malloc(sizeof(listint_t));
        if (node == NULL)
            return (NULL);
        node->n = array[i];
        node->index = i;
        node->next = NULL;
        tmp->next = node;
        tmp = node;
    }

    return (head);
}

/**
 * free_list - Frees a singly linked list.
 * @list: Pointer to the head of the list.
 */
void free_list(listint_t *list)
{
    listint_t *tmp;

    while (list)
    {
        tmp = list;
        list = list->next;
        free(tmp);
    }
}

/**
 * print_list - Prints a singly linked list.
 * @list: Pointer to the head of the list.
 */
void print_list(const listint_t *list)
{
    while (list)
    {
        printf("Index[%lu] = [%d]\n", list->index, list->n);
        list = list->next;
    }
}
