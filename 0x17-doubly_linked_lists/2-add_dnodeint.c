#include "lists.h"

/**
  *add_dnodeint - adds new node at begining
  *of a doubly linked list
  *@head: the location of the head right now
  *@n: the data to be stored by the new node
  *
  *Return: the location of the new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	new_node->next = *head;
	*head = new_node;
	new_node->prev = NULL;
	new_node->n = n;
	return (new_node);
}

