#include "lists.h"
/**
  * get_nodeint_at_index - gets the node at the index given 
  *@head: the start of the list given
  *@index: the index you need node at
  *
  *Return: pointer to the node requested
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;
	while (count < index)
	{
		count++;
		current = current->next;
	}
	return (current);
}
