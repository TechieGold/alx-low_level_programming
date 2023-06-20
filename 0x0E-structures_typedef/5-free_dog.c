#include "dog.h"

/**
 * free_dog - frees dog structure.
 * @d: dog to free.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);

	free(d);
}
