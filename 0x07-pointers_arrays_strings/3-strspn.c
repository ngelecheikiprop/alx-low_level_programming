#include "main.h"
/**
  * strspn - gets the length of a prefix substring.
  *@s:string to check
  *@accept: what to look
  *
  *Return: unsigned int
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int number = 0;
	int i;
	int j;
	int found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				found = 1;
		}
		if (!found)
			break;
		number++;
		found = 0;
	}
	return (number);
}
