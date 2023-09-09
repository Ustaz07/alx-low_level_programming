#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 *
 * Return: returns pointer to allocated output.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = malloc(nmemb * size);
	if (output == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(output + i) = 0;

	return (output);
}
