#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Input pointer.
 *
 * Return: Ptr to a new string.
 */
char *_strdup(char *str)
{
	char *duplicated_str, *original_str;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	original_str = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = original_str;
	duplicated_str = malloc(sizeof(char) * (len + 1));
	original_str = duplicated_str;

	if (duplicated_str != NULL)
	{
		for (; i < len; i++)
		{
			duplicated_str[i] = *str;
			str++;
		}
		duplicated_str[i] = '\0';
		return (original_str);
	}
	else
		return (NULL);
}
