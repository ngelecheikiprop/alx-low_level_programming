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
	*s = to;
}
