#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *_calloc - allocate continous memory
  *@nmemb:number of members
  *@size:size of each member
  *
  *Return: pointer to location
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **ptr = malloc(sizeof(void *) * size);
	unsigned int i;
	unsigned int j;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	for (i = 1; i < nmemb; i++)
	{
		ptr[i] = malloc(sizeof(char) * size);
		if (ptr == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(ptr[j]);
			}
			return (NULL);
		}
	}
	memset(ptr, 0, (size * nmemb));
	return (ptr);
}
