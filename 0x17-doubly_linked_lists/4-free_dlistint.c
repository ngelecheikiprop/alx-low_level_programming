#include "lists.h"
/**
  *free_dlistint - frees a doubly linked list
  *@head: the start of the list
  *
  *Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	dlistint_t *current = NULL;

	if (head == NULL)
	{
		return;
	}
	current = head;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
