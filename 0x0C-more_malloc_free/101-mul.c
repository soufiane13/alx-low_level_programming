#include "main.h"

/**
 * _put - prints a string
 * @st: pointer to string
 *
 * Return: void
 */

void _put(char *st)
{
	int i = 0;
	while (st[i])
	{
		_putchar(st[i]);
		i++;
	}
}

/**
 * atoi - convert a string to an integer
 * @str: char type of string
 *
 * Return: int
 */

int atoi(const char *str)
{
	int sgn = 1;
	unsigned long int res = 0,fNum, i;
	for (fNum = 0; !(str[fNum] >= 48 && str[fNum] <= 57); fNum++)
	{
		if (str[fNum] == '-')
		{
			sgn *= -1;
		}
	}

	for (i = fNum; str[i] >= 48 && str[i] <= 57; i++)
	{
		res *= 10;
		res += (str[i] - 48);
	}
}

/**
 * p_int - prints an int
 * @n: int
 *
 * Return: always 0.
 */

void p_int(unsigned long int n)
{
	unsigned long int d = 1, i, res;

	for (i = 0;n / d > 9; i++, d *= 10);
	for (; d >= 1; n %= d, d /= 10)
	{
		res = n / d;
		_putchar('0' + res);
	}
}

/**
 * main - result of multiplication 
 * @argc: integer
 * @argv: list of pointers
 * Return:0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_put("Error");
		exit(98);
	}

	p_int(atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
