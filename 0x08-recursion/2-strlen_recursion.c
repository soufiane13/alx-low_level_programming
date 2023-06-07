#include "main.h"

/**
 * _strlen_recursion - function that mesure the lenght of a string
 * @s: pointer to a string
 * @l: integer
 * Return:void
 */

int _strlen_recursion(char *s)
{
	int l = 0;
	if (*s > '\0')
	{
		l += 1;
		l = l + _strlen_recursion(s + 1);
	}
	return (l);
}
