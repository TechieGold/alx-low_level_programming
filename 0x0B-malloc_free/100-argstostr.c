#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Arguments' counter.
 * @av: Arguments' values.
 *
 * Return: 0 on success.
 */

char *argstostr(int ac, char **av)
{
	int length = 0, i, POS = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;

	concatenated = (char *) malloc((length + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy(concatenated + POS, av[i]);
		POS += strlen(av[i]);
		concatenated[POS] = '\n';
		POS++;
	}
	concatenated[length] = '\0';
	return (concatenated);
}
