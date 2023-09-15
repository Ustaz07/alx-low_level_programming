#include <stddef.h>

/**
 * array_iterator - Execute a function on each element of an array.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: P to the funct.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
