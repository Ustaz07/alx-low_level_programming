#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars.
 * @size: Size of the array to create.
 * @c: Char to initialize the array.
 *
 * Return: Ptr to the new array.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
