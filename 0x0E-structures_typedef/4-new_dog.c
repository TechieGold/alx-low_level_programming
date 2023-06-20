#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: NULL if function fails otherwise pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = (char *)malloc(strlen(name) + 1);
	newDog->owner = (char *)malloc(strlen(owner) + 1);

	if (newDog->name == NULL || newDog->owner == NULL)
		return (NULL);

	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}
