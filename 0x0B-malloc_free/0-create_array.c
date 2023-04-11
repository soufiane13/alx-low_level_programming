#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creat an array and initialize
 * @size: int size of erray
 * @c: char
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
