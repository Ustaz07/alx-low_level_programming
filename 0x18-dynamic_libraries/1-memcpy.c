#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: Pointer to the dest area.
 * @src: Pointer to the sc area.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the dest area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
