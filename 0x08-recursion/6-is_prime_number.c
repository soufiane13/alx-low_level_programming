#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function prime number
 * @n: integer
 * @o: int
 * Return: 0 or 1
 */

int check(int n, int o);
int is_prime_number(int n)
{
	return (check(n, 2));
}
/**
 * check - function chekes if number is prime
 * @n: int
 * @o: int
 * Return: int
 */
int check(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check(n, o + 1));
}
