#include <stdio.h>
#include <stdlib.h>
/**
  *create_array - makes an array of characters
  *and intializes it with specific character
  *@size:size of array
  *@c:character to fill with
  *
  *Return: pointer to array
  *NULL if size = 0;
  *NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(sizeof(char) * size);
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				str[i] = c;
			}
			return (str);
		}
	}
}
