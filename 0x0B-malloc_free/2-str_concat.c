#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * str_concat - concatenates two strings
  *@s1: the first string
  *@s2: the second string
  *
  *Return: pointer to new memory space
  *NULL if there was a failure
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int neededlen;
	char *string1;
	char *string2;
	unsigned int i;
	unsigned int j = 0;
	char *newString;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	string1 = strdup(s1);
	string2 = strdup(s2);
	neededlen = len1 + len2 + 1;
	newString = malloc(sizeof(char) * neededlen);
	if (newString == NULL)
		return NULL;
	for (i = 0; i < len1; i++)
	{
		newString[i] = string1[i];
	}
	j = i + j;
	for (i = 0; i < len2; i++)
	{
		newString[j + i] = string2[i];
	}
	newString[j + i] = '\0';
	return (newString);
}
