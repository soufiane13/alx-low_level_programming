#include "dog.h"
#include <stdlilb.h>

/**
 * init_dog - initislization of a dog
 * @d: the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog owner
 *
 * Return: void
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
