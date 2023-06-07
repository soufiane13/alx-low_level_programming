#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: integr
 * Return: intger or -1
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr - calculate square root
 * @n: integr
 * @v: integer
 * Return: integer
 */
int sqr(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (sqr(n, v + 1));
	else
		return (-1);
}
