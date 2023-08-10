#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *string_nconcat - takes s1 and part or whole of s2
  *@s1: first string
  *@s2: second string
  *
  *Return: total string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int lens1;
	unsigned int nullbyte = 1;

	lens1 = strlen(s1);
	newstr = malloc((lens1 + n + nullbyte) * sizeof(char));
	strcpy(newstr, s1);
	strncat(newstr, s2, n);
	return (newstr);
}
