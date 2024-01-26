#include "lists.h"
/**
  *sum_dlistint - sums all the data in a doubly linked list
  *@head: the begining of a doubly linked list
  *
  *Return: sum of the list
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
