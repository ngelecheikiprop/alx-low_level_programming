#include "lists.h"
/**
  *get_dnodeint_at_index - gets node at the index
  *given
  *@head: the begining of the list
  *@index: the index needed
  *
  *Return: the nth node of dlistint_t
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while ((count < index) && (head))
	{
		head = head->next;
		count++;
	}
	if (index == count)
		return (head);
	else
		return (NULL);
}

