#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters to uppercase.
 *@str: string to return.
 * Return: string.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[j] - 32;
		}
	}
	return (str);
}
