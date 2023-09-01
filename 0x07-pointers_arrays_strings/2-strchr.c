#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input string to search
 * @c: an input character to locate
 * * Return: return  i th pointer to the position
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
