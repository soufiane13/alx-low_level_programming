#include <stdio.h>

/**
 * main - print all arguments passed in
 * @argv: list of pointers.
 * @argc:integer.
 *
 * Return: always 0.
 */

int main(int argc, char const **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
