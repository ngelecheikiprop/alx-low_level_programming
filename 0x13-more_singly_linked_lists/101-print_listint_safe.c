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
	const listint_t *s, *f, *loopAt;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	s = f = head;
	while (s && f && f->next)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			loopAt = s;
			printf("-> [%p] %d\n", (void *)s->next->next, s->next->next->n);
			loopAt = s = s->next->next;
			while (s != loopAt)
			{
				printf("[%p] %d\n", (void *)s, s->n);
				s = s->next;
			}
			exit(100);
		}
	}
	return (count);
}
