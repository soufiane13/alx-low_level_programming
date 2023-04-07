#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function of rased number
 *
 * @x: the base
 * @y: the exposant
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);


	return (x * _pow_recursion(x, y - 1));

}
