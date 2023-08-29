#include "lists.h"
/**
  * insert_nodeint_at_index - inserts node at an index
  *@head:start of the node
  *@idx: where to insert the node
  *@n: the number to insert at the index
  *
  *Return: the location of new node
  *NULL if it fails
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *temp;
	listint_t *new;
	unsigned int count = 0;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		temp = current;
		current = new;
		current->next = temp;
	}
	else
	{
		idx = idx - 1;
		while (count < idx)
		{
			count++;
			if(current->next != NULL)
				current = current->next;
			else
				return (NULL);
		}
		temp = current->next;
		current->next = new;
		new->next = temp;
	}
	return (new);
}
