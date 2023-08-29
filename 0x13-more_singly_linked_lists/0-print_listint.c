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
	const listint_t *temp;

	if (h == NULL)
		return (0);
	else
	{
		temp = h;
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			no_of_nodes++;
			temp = temp->next;
		}
	}
	return (no_of_nodes);
}
