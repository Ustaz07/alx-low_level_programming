#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Point to the destination.
 * @src: Point to the source.
 * @n: Maximum number of bytes to concatenate from src.
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr)
		ptr++;

	while (*src && i < n)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}

	*ptr = '\0';

	return (dest);
}
