#include <stdio.h>
#include "dog.h"

/**
  * init_dod - A function that initializes a variable of type struct dog.
  * @d: The dog to be initailized.
  * @name: The name of the dog.
  * @owner: The owner of the dog.
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
