#include "lists.h"
/**
  *sum_listint - adds everything in the list
  *@head: the start of the list
  *
  *Return: the sum of items in the list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
