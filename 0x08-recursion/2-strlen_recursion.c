#include "main.h"
#include <stdio.h>


/**
 * _strlen_recursion - function gives the lenght
 * @s:pointer to string
 * Return: int
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
