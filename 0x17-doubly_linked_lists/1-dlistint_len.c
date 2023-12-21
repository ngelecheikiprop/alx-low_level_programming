#include "lists.h"
/**
 *dlistint_len - prins values in a doubly linked list
 *@h:the head of the list
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
