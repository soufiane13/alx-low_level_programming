#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         or - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, multiple = 1;
	int length;

	if (b == '\0')
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		n += (b[length] - '0') * multiple;
		multiple *= 2;
	}

	return (n);
}
