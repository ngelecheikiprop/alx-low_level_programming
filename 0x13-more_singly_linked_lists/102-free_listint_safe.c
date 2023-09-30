#include "lists.h"
/**
  *free_listint_safe - safely frees listint
  *@h: the begining of the list
  *
  *Return: the size of the list it freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *visited[10000] = {NULL}, *head;
	listint_t *temp;
	size_t count = 0;
	int i;

	head = *h;
	if (head == NULL)
		return (count);
	current = head;
	while (current != NULL)
	{

		for (i = 0; i < 10000; i++)
		{
			if (visited[i] == current)
			{
				*h = NULL;
				return (count);
			}
		}
		for (i = 0; i < 10000; i++)
		{
			if (visited[i] == NULL)
			{
				visited[i] = current;
				break;
			}
		}
		temp = current->next;
		free(current);
		current = temp;
		count++;
	}
	*h = NULL;
	return (count);
}

