#include "lists.h"
/**
  *insert_dnodeint_at_index - inserts node at the index
  *given
  *@h: the head of the list
  *@idx: the index to insert
  *@n: the number to insert
  *
  *Return: the address of the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node;
	dlistint_t *current;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	while ((current) && (count < idx))
	{
		current = current->next;
		count++;
	}

	if (idx == count)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = current;
		new_node->prev = current->prev;
		current->prev->next = new_node;
		current->prev = new_node;
		return (new_node);
	}
	else
		return (NULL);

}
