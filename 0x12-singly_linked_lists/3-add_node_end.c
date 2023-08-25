#include "lists.h"
/**
  *add_node_end - adds a node at the end
  *@head: pointer that stores location of pointer to begining
  *of list
  *@str:the string to add to the end of the list
  *Return: pointer to the last element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new;
	char *strcpy;

	new = malloc(sizeof(list_t));
	if (str == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	strcpy = strdup(str);
	if (strcpy == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strcpy;
	if (new->str == NULL)
	{
		free(new);
		free(strcpy);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}

	return (new);
}
