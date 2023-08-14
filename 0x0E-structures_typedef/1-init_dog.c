#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
  * init_dog - intializes the structure of type dog
  *@d: pointer to structure
  *@name: name of the dog
  *@age:age of the dog
  *@owner: name of the owner
  *
  *Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
