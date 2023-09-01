#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to search for
 *
 * Return: The pointer to the byte in s if no byte found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
				return (s);
		}
		s++;
	}

	return (NULL);
}
