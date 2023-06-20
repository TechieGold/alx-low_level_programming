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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
