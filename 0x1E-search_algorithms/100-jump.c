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
	size_t step = sqrt(size);
	size_t prev = 0;

	/* Jumping in steps of 'step' */
	while (array[(step < size ? step : size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			return (-1);
		}
	}

	/* Linear search in the block */
	while (array[prev] < value)
	{
		prev++;
		if (prev == (step < size ? step : size))
		{
			return (-1);
		}
	}

	if (array[prev] == value)
	{
		return (prev);
	}

	return (-1);
}
