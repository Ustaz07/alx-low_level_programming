#include <stdio.h>
#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search in.
 * @needle: an input string to search in to haystack.
 *
 * Return: A pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay_ptr, *ndl_ptr;

	while (*haystack)
	{
		hay_ptr = haystack;
		ndl_ptr = needle;

		while (*ndl_ptr && (*hay_ptr == *ndl_ptr))
		{
			hay_ptr++;
			ndl_ptr++;
		}

		if (*ndl_ptr == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
