#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located.
 *         If value is not present in array or if array is NULL, returns -1.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step, prev, i;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);
    prev = 0;

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        if (step >= size)
            break;
        prev = step;
        step += sqrt(size);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - (size_t)sqrt(size), prev);

    for (i = prev - (size_t)sqrt(size); i < size && i <= prev; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return ((int)i);
    }

    return (-1);
}
