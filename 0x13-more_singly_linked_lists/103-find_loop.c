#include "lists.h"
/**
  *find_listint_loop - finds a loop in list
  *@head: this is the start of the list
  *
  *Return: the address of where the loop starts
  */
listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *visited[10000] = {NULL};
	int i;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{

		for (i = 0; i < 10000; i++)
		{
			if (visited[i] == head)
			{
				return (head);
			}
		}
		for (i = 0; i < 10000; i++)
		{
			if (visited[i] == NULL)
			{
				visited[i] = head;
				break;
			}
		}

		head = head->next;
	}
	return (NULL);
}
