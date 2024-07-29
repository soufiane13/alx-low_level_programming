#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int h, wid;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (h == size - 1)
				continue;
			_putchar('\n');
		}
	}
