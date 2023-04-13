#include "main.h"

/**
 * *malloc_checked - function allocates memory using malloc and exit if failed
 * @b: integer
 *
 * Return: pointer to array
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
