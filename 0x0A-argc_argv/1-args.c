#include <stdio.h>

/**
 * main - print number of arguments
 * @argv: list
 * @argc: int
 * Return: 0 or 1
 */

int main(int argc, char *argv[] __attribute__(()unused))
{
	printf("%d\n", argc - 1);
	return (0);
}
