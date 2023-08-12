#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a heap of memory
 * @ptr: the previous location
 * @old_size: previous size
 * @new_size: the size you want now
 *
 * Return: pointer to new location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	if (new_size > old_size)
		return (newptr);
	strcpy(newptr, ptr);
	free(ptr);
	return (newptr);
}
