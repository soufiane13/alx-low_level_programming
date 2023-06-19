#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner name
 *
 * Description: defining a new structur of dog*/
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

#endif
