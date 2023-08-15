#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees a dog
 * @d: pointer to structure
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
