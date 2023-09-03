#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * is_palindrome_check - Function to check if a string is a palindrome.
 * @s: string.
 * @start: start.
 * @end: ending.
 *
 * Return: true if s is a palindrome, false otherwise.
 */
bool is_palindrome_check(char *s, int start, int end)
{
	if (start >= end)
	{
		return (true);
	}
	if (s[start] != s[end])
	{
		return (false);
	}
	return (is_palindrome_check(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: string.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (is_palindrome_check(s, 0, len - 1) ? 1 : 0);
}
