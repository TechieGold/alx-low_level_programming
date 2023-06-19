#include "dog.h"
#include  <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: The dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 *
 * Return: 0 on success.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
