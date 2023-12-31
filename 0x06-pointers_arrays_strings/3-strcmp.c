#include "main.h"
/**
  * _strcmp -  compares two strings.
  *@s1: first String
  *@s2: second string
  *
  *Return: int
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((int)(*s1) - (int)(*s2));
}

