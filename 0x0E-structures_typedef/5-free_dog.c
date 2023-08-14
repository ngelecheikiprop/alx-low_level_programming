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
	if (d == sizeof(dog_t))
		free(d);
}
