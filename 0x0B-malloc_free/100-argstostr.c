#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *argstostr - changes arguments to string
  *@ac: the number of arguments
  *@av: vector of arguments to make string
  *
  *Return: one string with all arguments
  */
char *argstostr(int ac, char **av)
{
	int i;
	char *newstr;
	int length = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		length  += strlen(av[i]);
	}
	length = length + ac + 2;
	newstr = malloc(length * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	strcpy(newstr, av[0]);
	strcat(newstr, "\n");
	for (i = 1; i < ac; i++)
	{
		strcat(newstr, av[i]);
		strcat(newstr, "\n");
	}
	return (newstr);
}
