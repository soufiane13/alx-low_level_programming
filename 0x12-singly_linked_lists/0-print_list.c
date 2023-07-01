#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list
 * @h: The list_t list passed to the function
 *
 * Return: The number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes_counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes_counter++;
		h = h->next;
	}

	return (nodes_counter);
}
