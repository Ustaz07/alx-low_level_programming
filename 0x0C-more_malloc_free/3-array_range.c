#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *output;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	output = malloc((size) * sizeof(int));
	if (output == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		output[i] = min++;

	return (output);
}
