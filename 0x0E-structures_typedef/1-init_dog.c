#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: the dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *awner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
