#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 *
 * Description: A data strcuture that defines a dogs name, ages and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
