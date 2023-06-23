#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, print (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings_l;
	char *str;
	unsigned int i;

	va_start(strings_l, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings_l, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings_l);
}
