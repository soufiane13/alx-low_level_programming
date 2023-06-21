#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - -1 or 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index_s;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index_s = 0; index_s < size; index_s++)
	{
		if (cmp(array[index_s]) != 0)
			return (index_s);
	}

	return (-1);
}
