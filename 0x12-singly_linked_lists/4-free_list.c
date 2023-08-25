#include "lists.h"

/**
  *list_t - frees a list
  *given the head
  *
  *Return: nothing
  */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *current;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
