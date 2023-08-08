#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *_strdup - duplicates a string
  *@str: string to duplicate
  *
  *Return: pointer to duplicate string
  */
char *_strdup(char *str)
{
	int i;
	int len;
	char *newstr;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	newstr = malloc(sizeof(char) * (len + 1));
	for (i = 0; i < len; i++)
	{
		newstr[i] = str[i];
	}
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (newstr);
	}
}
