#include "lists.h"

/**
  *add_dnodeint_end - adds node at the end of
  *a doubly linked list
  *@head: the location of begining of the list
  *@n: the data to be stored in the node
  *
  *Return: the address of the new element
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *h = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		(*head) = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->n = n;
	}
	else
	{
		h = *head;

		while (h->next)
		{
			h = h->next;
		}
		h->next = new_node;
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = h;
	}
	return (new_node);
}

