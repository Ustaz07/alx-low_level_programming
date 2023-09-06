#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: The argument count
 * @av: The argument vector
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len + 1;
		len = 0;
	}

	str = malloc(sizeof(char) * total_len + 1);

	if (str == NULL)
		return (NULL);

	total_len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[total_len++] = av[i][j];
		str[total_len++] = '\n';
	}

	str[total_len] = '\0';

	return (str);
}

