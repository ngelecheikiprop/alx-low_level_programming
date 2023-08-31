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
	const listint_t *s, *f;
	size_t count = 0;

	s = f = head;
	while (s)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		s = s->next;
		if (f && f->next)
		{
			f = f->next->next;
			if (s == f)
			{
				printf("[%p] %d\n", (void *)s,s->n);
				printf("[%p] %d\n", (void *)s->next,s->next->n);
				printf("-> [%p] %d\n", (void *)s->next->next,s->next->next->n);
				exit(98);
			}
		}
	}
	return (count);
}
