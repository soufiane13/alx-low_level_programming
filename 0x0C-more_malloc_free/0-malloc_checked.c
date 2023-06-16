#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory with exit error if failed
 * @b: int
 * Return: null or pointer
 */

void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
		exit(98);

	return (n);
}
