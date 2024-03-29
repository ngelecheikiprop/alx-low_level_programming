#include "lists.h"
/**
 * print_dlistint-prints a list
 *
 * @h: the head of lst
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_of_nodes = 0;

	if (h == NULL)
	{
		return (no_of_nodes);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_of_nodes = no_of_nodes + 1;
	}
	return (no_of_nodes);
}
