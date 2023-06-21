#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog.
 * @d: pointer to the dog struct.
 *
 * Return: Nothing if d is NULL and nill
 * if an element of d is NULL.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nill)\n");
	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nill)\n");

}
