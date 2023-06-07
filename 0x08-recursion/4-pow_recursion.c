#include "main.h"

/**
 * _pow_recursion - function calculate number raised to a power
 * @x: integer the number
 * @y: integer the power
 * Return: integer
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
