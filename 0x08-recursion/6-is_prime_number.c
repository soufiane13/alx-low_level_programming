#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - return if an number is prime
 * @n: the checked number
 * @i: interation
 *
 * Return: 0 if it not prime 1 if it prime.
 */
int _prime(int n, int i);

int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - check if the number is prime
 * @n: the cheked number
 * @i: interation.
 *
 * Return: 1 for prime number or 0 if it not
 */

int _prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (_prime(n, i + 1));

}
