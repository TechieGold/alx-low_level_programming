#include "main.h"
#include <stdio.h>

/**
  * _strstr - A function that locates a substring
  * @haystack: An input string to search in
  * @needle: A input string to locate into string haystack
  *
  * Return: A pointer to the beginning of the located substring
  * or NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;

	}
	return ('\0');
}
