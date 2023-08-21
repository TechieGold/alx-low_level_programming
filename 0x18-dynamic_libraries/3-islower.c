#include "main.h"

/**
  * _islower - Entry point
  *
  * @c:
  *
  * Description - Write a function that checks for lowercase character
  *
  * Return: 0 or 1
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
