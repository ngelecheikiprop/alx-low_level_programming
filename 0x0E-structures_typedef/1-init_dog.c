#include "dog.h"
#include <string.h>
#include <stdlib.h>
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
	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name == NULL)
		printf("cannot allocate memory for name");
	if (d->owner == NULL)
		printf("cannot allocate memory for owner");
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
