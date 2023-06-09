#include "main.h"
#include <string.h>

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is palindrome or not.
 * @s: The string input.
 *
 * Return: 1 if string is palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}


/**
 * is_palindrome_recursive - Recursive function to check if
 *		a string is palindrome.
 * @s: A string.
 * @start: starting index.
 * @end: Ending index.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
