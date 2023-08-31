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
	const listint_t *s;
	const listint_t *f;
	size_t count = 0;

	s = head;
	f = head;
	if (head == NULL)
		exit (98);
	while (s != NULL && f != NULL && f->next != NULL)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		s = s->next;
		f = f->next->next;
		count++;

		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)s,s->n);
			break;
		}
	}
	return (count);
}
