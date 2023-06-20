#include "dog.h"

char *my_strcpy(char *dest, const char *src);
unsigned int my_strlen(const char *str);

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

	newDog->name = (char *)malloc(my_strlen(name) + 1);
	newDog->owner = (char *)malloc(my_strlen(owner) + 1);

	if (newDog->name == NULL || newDog->owner == NULL)
		return (NULL);

	my_strcpy(newDog->name, name);
	my_strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}


/**
 * my_strcpy - Copies a string to a varaible.
 * @dest: Destination.
 * @src: Source.
 *
 * Return: A pointer to the destination string.
 */
char *my_strcpy(char *dest, const char *src)
{
	char *dest_ptr = dest;
	const char *src_ptr = src;

	if (dest == NULL || src == NULL)
		return (NULL);
	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	*dest_ptr = '\0';

	return (dest);
}


/**
 * my_strlen - Finds the length of a string.
 * @str: The string.
 *
 * Return: Length of string.
 */
unsigned int my_strlen(const char *str)
{
	unsigned int length = 0;

	if (str == NULL)
		return (0);

	while (str[length] != 0)
		length++;

	return (length);

}
