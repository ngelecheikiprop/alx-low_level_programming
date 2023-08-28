#include "lists.h"
/**
  *pop_listint - removes the first element of a list
  *@head: this is the begining of the list
  *
  *Return: the data of the node being removed
  */
int pop_listint(listint_t **head)
{
	listint_t *current;
	listint_t *temp;
	int data;

	current = *head;
	data = current->n;
	temp = current->next;
	free(current);
	*head = temp;
	return (data);
}
