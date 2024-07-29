#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: a string to be searched.
 * @c: a character .
 *
 * Return: If c is found - a pointer to the first occurence.
 *         If  not  - NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
