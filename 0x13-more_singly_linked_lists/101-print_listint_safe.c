#include "lists.h"
/**
  *print_listint_safe - prints a list but carefully no to
  *fall into a cyclic printing
  *@head: this is the start of the list
  *
  *Return: the number of nodes of a list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *visited[10000] = {NULL};
	size_t count = 0;
	int i;

	if (head == NULL)
		exit(98);
	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		for (i = 0; i < 10000; i++)
		{
			if (visited[i] == current)
			{
				printf("->[%p] %d\n", (void *)current, current->n);
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
		current = current->next;
	}
	return (count);
}
