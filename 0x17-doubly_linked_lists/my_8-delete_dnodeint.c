#include "lists.h"
/**
  *delete_dnodeint_at_index - deleting node at an index
  *@head: location of the starting of the list
  *@index: the index of node you want to delete
  *
  *Return: 1 if succesed , -1 if failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		return (1);
	}
	current = *head;
	while ((count < index) && (current))
	{
		current = current->next;
		count++;
	}
	if (index == count)
	{
		current->prev->next = current->next;
		if (current->next)
		{
			current->next->prev = current->prev;
		}
		free(current);
		return (1);
	}
	return (-1);
}

