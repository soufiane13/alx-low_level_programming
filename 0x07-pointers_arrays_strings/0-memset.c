#include "header.h"

/**
 * memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area .
 * @b: The character to fill the memory area.
 * @n: The number of bytes.
 *
 * Return: A pointer to @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
