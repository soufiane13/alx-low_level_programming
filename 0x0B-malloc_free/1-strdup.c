#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to the new allocated space in memory.
 * @str: a string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, lenght = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		lenght++;

	duplicate = malloc(sizeof(char) * (lenght + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[lenght] = '\0';

	return (duplicate);
}
