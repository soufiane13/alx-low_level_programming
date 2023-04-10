#include <stdio.h>

/**
 * main - prints the number of argumants passed in
 * @argc: integer.
 * @argv: list of pointers
 *
 * Return: always 0.
 */

int main(int argc, char const **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);

}
