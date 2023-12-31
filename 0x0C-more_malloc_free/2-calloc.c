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
	int mysize = sizeof(char) * size;
	void *ptr = malloc(nmemb * mysize);

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	memset(ptr, 0, (size * nmemb));
	return (ptr);
}
