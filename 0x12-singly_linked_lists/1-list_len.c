#include "lists.h"

/**
 * list_len - Finds the number of elements in linked list
 * @h: The linked list
 *
 * Return: The number of elements in linked list h
 */
size_t list_len(const list_t *h)
{
	size_t  counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}

