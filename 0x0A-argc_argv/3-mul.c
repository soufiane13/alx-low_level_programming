#include <stdio.h>

/**
 * main - function that multiplies two numbers
 * @argv: list of pointers.
 * @argc: int.
 *
 * Return: 0 succes, 1 error.
 */

int main(int argc, char **argv)
{
	int s;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
