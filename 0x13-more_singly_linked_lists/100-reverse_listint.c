#include "lists.h"
/**
  *reverse_listint - reverses a list
  *@head: the location of start of a list
  *
  *Return: pointer to the new head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
