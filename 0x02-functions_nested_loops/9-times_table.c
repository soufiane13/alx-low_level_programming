#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, multiple, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multiple;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, multiple, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multiple;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
