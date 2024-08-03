#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                       using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located.
 *         If value is not present in array or if array is NULL, returns -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, start, end;
	size_t i;  /* Declare 'i' here */

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	bound = 1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	start = bound / 2;
	end = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			printf("%d%s", array[i], (i < end) ? ", " : "\n");

		/* Move this declaration to the top */
		{
			size_t mid = start + (end - start) / 2;
			if (array[mid] == value)
				return ((int)mid);
			else if (array[mid] < value)
				start = mid + 1;
			else
				end = mid - 1;
		}
	}

	return (-1);
}
