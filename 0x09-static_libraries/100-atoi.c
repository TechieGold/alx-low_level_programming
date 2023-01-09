#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int _var = 1;
	unsigned int tot = 0;
	char null_flag = 0;

	while (*s)
	{
	if (*s == '-')
	_var *= -1;

	if (*s >= '0' && *s <= '9')
	{
	null_flag = 1;
	tot = tot * 10 + *s - '0';
	}

	else if (null_flag)
	break;
	s++;
	}

	if (_var < 0)
	tot = (-tot);

	return (tot);
}
