#include "lists.h"
/**
  *print_listint - lists elements in a
  *linked list
  *@h: this is the pointer to the list
  *
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		no_of_nodes++;
		h = h->next;
	}
	return (no_of_nodes);
}
