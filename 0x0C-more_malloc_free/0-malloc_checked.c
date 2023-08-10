#include <stdio.h>
#include <stdlib.h>
/**
  *malloc_checked -  returns succesful memory allocated
  *@b:number of bytes you want to store
  *
  *Return:nothing
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
		return (ptr);
	else
	{
		exit (98);
	}
}
