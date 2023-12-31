#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *string_nconcat - takes s1 and part or whole of s2
  *@s1: first string
  *@s2: second string
  *@n:maximum bytes of s2
  *
  *Return: total string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int lens1;
	unsigned int nullbyte = 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens1 = strlen(s1);
	newstr = malloc((lens1 + n + nullbyte) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	strcpy(newstr, s1);
	strncat(newstr, s2, n);
	return (newstr);
}
