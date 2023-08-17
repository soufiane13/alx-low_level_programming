#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a  list.
 * @head: The head of the  list.
 * @index: The located node.
 *
 * Return: NULL -If the node does not exist.
 *         Or - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
