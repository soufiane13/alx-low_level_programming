#include <stdio.h>

/**
 * main - function that print the name of programm
 * @argv: pointers list
 * @argc: integer 
 * Return: always 0.
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("name = %s\n", argv[0]);
	return (0);
}