#include "main.h"
#include <stdlib.h>

/**
 * str_len - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: The 1st string.
 * @s2: The 2nd string.
 *
 * Return: A pointer to a newly allocated space containing the concatenated
 *         string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = (s1 == NULL) ? 0 : str_len(s1);
	int len_s2 = (s2 == NULL) ? 0 : str_len(s2);
	char *result, *ptr;
	int i = 0;

	result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	ptr = result;

	if (result == NULL)
		return (NULL);

	for (; i < len_s1; i++)
		*ptr++ = s1[i];

	for (i = 0; i < len_s2; i++)
		*ptr++ = s2[i];

	*ptr = '\0';

	return (result);
}
