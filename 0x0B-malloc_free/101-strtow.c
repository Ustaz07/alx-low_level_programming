#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - Splits a string into words
 * @str: The input string
 * Return: A pointer to an array of strings (words), or NULL on failure
 */

char **strtow(char *str);

int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

