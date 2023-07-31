#include "main.h"
/**
  *_strpbrk - searches a string for any of a set of bytes.
  *@s: string to search for
  *@accept: what to look for
  *
  *Return: char
  */
char *_strpbrk(char *s, char *accept)
{
	int found = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
			}
		}
		if (found)
			break;
	}
	return (s + i);
}
