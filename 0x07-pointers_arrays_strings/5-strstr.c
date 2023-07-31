#include "main.h"
/**
  *_strstr - checks if string is there
  *@haystack: string to scan'
  *@needle: what to look for
  *
  *Return: pointer to char
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *not_found = (char *)1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++)
		{
		}
		if (needle[k] == '\0')
		{
			return ((char *)&haystack[i]);
		}
	}
	return (not_found);
}
