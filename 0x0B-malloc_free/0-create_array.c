#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * create_array - creates an array of char,
  * and initializes it with specific char.
  *
  * prototype: char *create_array(unsigned int size, char c);
  * @size: size of the array
  * @c: character to be inserted
  *
  * Return: NULL if size = 0
  * Return a pointer to the array, or NULL if it fails.
  */
char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int count = 0;

	ptrArray = malloc(size * sizeof(char));

	if (size == NULL)
	{
		return (NULL);
	}
	while (count < size)
	{
		ptrArray[count] = c;
		count++;
	}
	return (ptrArray);
}
