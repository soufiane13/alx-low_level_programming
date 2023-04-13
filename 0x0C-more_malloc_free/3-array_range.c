#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum staring int
 * @max: maximum integer
 *
 * Return: array of int
 */

int *array_range(int min, int max)
{
	int l, i;
	int *p;

	if (min > max)
		return (NULL);

	l = max - min + 1;
	p = malloc(sizeof(int) * l);

	if (!p)
		return (NULL);

	for (i = 0; i < l; i++)
		p[i] = min++;
	return (p);
}
