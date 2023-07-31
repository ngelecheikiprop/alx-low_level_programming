#include "main.h"
#include <stdlib.h>
/**
  *set_string - sets the value of a pointer to a char
  *@s: pointer
  *@to: what to take
  *
  *Return: Nothing
  */
void set_string(char **s, char *to)
{
	int len;
	int i;

	if (s == ((void *)0))
		return;
	for (len = 0; to[len] != '\0'; len++)
	{
	}
	*s = (char *)malloc((len + 1) * sizeof(char));
	for (i = 0; i <= len; i++)
	{
		(*s)[i] = to[i];
	}
}
