#include "lists.h"
/**
  *delete_nodeint_at_index - removes node at index given
  *@head: the begining of the list
  *@index: the index to remove node
  *
  *Return: 1 if succeded and -1 if not succeded
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;
	listint_t *temp;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	index = index - 1;
	while (index > count)
	{
		count++;
		if (current->next != NULL)
			current = current->next;
		else
			return (-1);
	}
	temp = current->next->next;
	free(current->next);
	current->next = temp;
	return (1);
}
