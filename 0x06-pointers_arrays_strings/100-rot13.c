#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			if ((*ptr >= 'A' && *ptr <= 'Z'))
			{
				*ptr = (*ptr - 'A' + 13) % 26 + 'A';
			}
			else if ((*ptr >= 'a' && *ptr <= 'z'))
			{
				*ptr = (*ptr - 'a' + 13) % 26 + 'a';
			}
		}
		ptr++;
	}
	return (str);
}
