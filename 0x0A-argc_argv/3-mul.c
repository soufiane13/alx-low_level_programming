#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of two passed numbers
 * @argv: list
 * @argc: int
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1] * atoi(argv[2]));
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
