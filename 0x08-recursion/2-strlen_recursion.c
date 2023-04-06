#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that return the lenght of a string
 * @s: pointer to a string
 * @l: integer get the lenght of string
 *
 * Return: a integer , the lenght th string 
 */

int _strlen_recursion(char *s)
{
	int l = 0;
	if (*s > '\0')
	{
		l = l + _strlen_recursion(s + 1) + 1;
	}
	return (l);
}
