#include "dog.h"
#include <stdlib.h>

int _strlen(char *st);
char *_strcopy(char *desti, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen -  the length of a string.
 * @st: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *st)
{
	int l = 0;

	while (*st++)
		l++;

	return (l);
}

/**
 * _strcopy - Copies a string pointed to by src.
 *
 * @desti: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *desti, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	desti[index] = '\0';

	return (desti);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);

	return (d);
}
