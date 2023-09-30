#include "lists.h"

/**
  * find_listint_loop - finds a loop in list
  * @head: this is the start of the list
  *
  * Return: the address of where the loop starts, or NULL if no loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow;
	listint_t *fast;

	if (head == NULL)
	{
		return (NULL);
	}
	slow = head->next;
	fast = head->next->next;
	while (fast && fast->next)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
		return (slow);
		}
		slow = slow->next;
		fast = fast->next->next;
		}
		return (NULL);
}
