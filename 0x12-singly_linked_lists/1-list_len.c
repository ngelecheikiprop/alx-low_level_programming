#include "lists.h"
#include <stddef.h>
/**
  *list_len - says the number of elemts in a list
  *@h: the head of the list
  *Return: the number of elements in the list
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
