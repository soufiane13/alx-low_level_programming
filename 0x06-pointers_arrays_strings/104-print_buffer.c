#include "main.h"
#include <stdio.h>

/**
 * isPrintableSCII - function that return integer.
 * @n: integer input.
 * Return: an integer.
 */

int isPrintableSCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - function that start and end  buffer.
 * @b: character.
 * @end: end number.
 * @start: start number.
 * Return: Always 0.
 */


void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			print ("  ");
		if (i % 2)
			printf("  ");
		i++;
	}
}

/**
 * printASCII - function that prints ASCII.
 * @b: input character.
 * @start: start number.
 * @end: end number.
 * Return: Always 0.
 */


void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}


/**
 * print_buffer - function that prints a buffer.
 * @b: input character
 * @size: size of buffer.
 * Return: Always 0.
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printfHexes(b, start, end);
			printf("\n");

		}
	} else
		printf("\n");

}
