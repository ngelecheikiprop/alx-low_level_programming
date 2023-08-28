#include "lists.h"
/**
  *add_nodeint - adds node at the end of a list
  *@head: start of the list
  *@n: the number to add at the begining of the list
  *
  *Return: pointer to what was added
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
