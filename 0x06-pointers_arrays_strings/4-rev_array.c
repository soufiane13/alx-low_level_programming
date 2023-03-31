#include "main.h"
#include <stdio.h>

/**
 * reverce_array - function that reverces the content of array.
 * @a: an erray of integers.
 * @n: the number of elements to swap.
 * Return: nothing.
 */

void reverce_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
