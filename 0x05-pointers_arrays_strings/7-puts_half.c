#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: a string .
 */
void puts_half(char *str)
{
	int index = 0, lenght = 0, n;

	while (str[index++])
		lenght++;

	if ((lenght % 2) == 0)
		n = lenght / 2;

	else
		n = (lenght + 1) / 2;

	for (index = n; index < lenght; index++)
		_putchar(str[index]);

	_putchar('\n');
}
