#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * @argv: list of pointers.
 * @argc: int.
 *
 * Return: 0 succes, 1 error.
 */

int main(int argc, char *argv[])
{
	int s = 0, n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		s = n1 * n2;
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
