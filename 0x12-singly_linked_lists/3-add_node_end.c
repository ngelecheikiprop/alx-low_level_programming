#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new = malloc(sizeof(list_t));
	char *strcpy;

	if(new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	strcpy= strdup(str);
	if (strcpy == NULL)
		return (NULL);
	new->str = strcpy;
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
	/*while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = malloc(sizeof(list_t));
	(current_node->next)->str = strdup(str);
	(current_node->next)->len = strlen(str);
	(current_node->next)->next = NULL;
	return (current_node->next);
	*list_head *current;

	current = malloc(sizeof(list_t));
	if (current == NULL)
	{
		return (NULL);
	}
	current = *head;
	while (current != NULL)
	{
		current= current->next;
	}
	current->str = strdup(str);
	current->len = strlen(str);
	return (current);*/
}
