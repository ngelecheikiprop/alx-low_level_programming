#include "main.h"
/**
  *_strchr -  locates a character in a string.
  *@s: string s
  *@c:character c
  *
  *Return: char
  */
char *_strchr(char *s, char c)
{
	char *myString = s;
	int i;

	for (i = 0; *(myString + i) != c; i++)
	{
		if (*(myString + i) == '\0')
			return ((void *)0);
	}
	return (s + i);
}
