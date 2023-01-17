#ifndef _DOG_H_
#define _DOG_H_

/**
  * struct dog - structure for a basic dog
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Owner of dog
  *
  * Description: Data structure for dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
