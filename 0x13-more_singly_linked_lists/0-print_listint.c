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

	while (h != NULL)
	{
		no_of_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (no_of_nodes);
}
