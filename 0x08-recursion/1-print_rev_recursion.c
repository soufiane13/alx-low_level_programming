#include "main.h"

/**
 * _print_rev_recursion - a function a string in reverse
 * @s: a pointer to a string to be reversed
 *
 * Return: void nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
