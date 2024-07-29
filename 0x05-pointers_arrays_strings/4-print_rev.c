#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: a string to be printed.
 */
void print_rev(char *s)
{
	int lenght = 0, index;

	while (s[index++])
		lenght++;

	for (index = lenght - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
