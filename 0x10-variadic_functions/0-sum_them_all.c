#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculate the sum of giving numbers
 * @n: the number of paramters passed to the finction
 * @...: a variable number of paramters
 *
 * Return: 0 if n == 0 or the sum of numbers passed
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}

