#include "lists.h"
/**
  *listint_len - give the number of nodes in a list
  *@h: the starting of the list
  *
  *Return: the number of nodes in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
