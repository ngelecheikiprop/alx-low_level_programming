#include "lists.h"
/**
  *free_listint2 - free a list and its head to NULL
  *@head: the begining of the list to free
  *
  *Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (*head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
