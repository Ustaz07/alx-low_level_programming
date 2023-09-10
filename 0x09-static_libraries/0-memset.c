#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 *
 * Return: Pointer to the memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
