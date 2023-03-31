#include "main.h"
#include <stdio.h>

/**
 * isLower - determin whether ascii is lower.
 * @c: input character.
 * Return: 1 if true, 0 if false.
 */


int isLower(char c)
{
	return (c >= 97 && c <= 122);
}


/**
 * isDelimiter - determin whether scii is delimiter.
 * @c: input character.
 * Return: 1 if true, 0 if false.
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n, .!?\"() {}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (i);
	return (0);
}

/**
 * cap_string - function that capitalizes all words.
 * @s: input string.
 * Return: a string.
 */


char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = i;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = i;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);

}
