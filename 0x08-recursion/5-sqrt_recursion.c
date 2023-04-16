#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function return the natural squar root
 * @n: given integer.
 *
 * Return: integer.
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - finction calculate natural square of root
 * @n: int
 * @i: iterate number
 *
 * Return: the natural squre root
 */

int _sqrt(int n, int i)
{
	int sqrt;

	sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
