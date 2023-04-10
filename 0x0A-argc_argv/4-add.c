#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argv: list of pointers
 * @argc: num of arguments
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	char *c;
	int s = 0;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (print("Error\n"), 1);
		s = s + atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
