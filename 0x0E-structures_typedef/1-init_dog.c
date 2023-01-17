#include <stdio.h>
#include "dog.h"

/**
  * init_dog - A function that initializes a variable of type struct dog.
  * @d: The dog to be initailized.
  * @name: The name of the dog.
  * @age: The age of the dog.
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
