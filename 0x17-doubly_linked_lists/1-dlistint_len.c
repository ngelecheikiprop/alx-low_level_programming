#include "lists.h"
/**
 * dlistint_len -  a function that returns the number of elements.
 *
 * @h: the begining of the lists
 *
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_nodes = 0;

	if (h == NULL)
	{
		return (no_of_nodes);
	}
	while (h)
	{
		h = h->next;
		no_of_nodes = no_of_nodes + 1;
	}
	return (no_of_nodes);
}

